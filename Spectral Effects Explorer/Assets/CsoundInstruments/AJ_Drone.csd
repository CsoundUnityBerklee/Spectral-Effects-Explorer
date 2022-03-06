<Cabbage>  bounds(0, 0, 0, 0)
form caption("AJ Drone Maker") size(650, 300), guiMode("queue") pluginId("def1")

rslider bounds(12, 92, 80, 73) channel("duration") range(0, 30, 10, 1, 1) text("DroneDuration") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(102, 92, 80, 73) channel("Loopstart") range(0.1, 5, 0.2, 1, 0.01) text("Loopstart") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(284, 94, 80, 73) channel("phasedif") range(0, 1, 0, 1, 0.01) text("PhaseDif") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(466, 94, 80, 73) channel("modfreq") range(0.01, 5, 2, 1, 0.01) text("ModFreq") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(376, 94, 80, 73) channel("moddepth") range(0, 1, 0.3, 1, 0) text("ModDepth") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(196, 94, 80, 73) channel("resmix") range(0, 1, 0.5, 0.5, 0.01) text("ResonatorMix") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(102, 170, 80, 73) channel("damp") range(0, 0.7, 0.3, 1, 0.1) text("Feedback(Caution)") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(554, 96, 80, 73) channel("amp") range(0, 1, 0.7, 1, 0.1) text("Gain") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(12, 170, 80, 73) channel("cps") range(0, 3000, 440, 0.25, 1) text("Frequency") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)
rslider bounds(194, 172, 80, 73) channel("lowpass") range(0, 10000, 1000, 0.25, 1) text("LPF") textColour(255, 255, 255, 255) colour(100, 80, 80, 5) trackerColour(192, 192, 192, 255)

button channel("trigger") bounds(290, 174, 80, 40) text("Start", "Start")
button channel("stop") bounds(290, 216, 80, 40) text("Stop", "Stop")  
button channel("record") bounds(376, 174, 80, 40) text("Record", "Record")  
button channel("recstop") bounds(374, 216, 80, 41) text("StopRecord", "StopRecord")  
button channel("update") bounds(466, 198, 80, 40) text("Update", "Update")

  
label bounds(186, 30, 244, 32) channel("label10015")   fontColour(255, 255, 255, 255) text("AJ Drone Maker")
</Cabbage> 


<CsoundSynthesizer>
<CsOptions>
-n -d
</CsOptions>
<CsInstruments>

ksmps = 64
nchnls = 2
0dbfs = 1

instr 1

krecord chnget "record"
krecstop chnget "recstop"
kstart chnget "trigger"
kstop chnget "stop"
kdur chnget "duration" 
kdur init 10


if changed(kstart) == 1 then
event "i", "drone", 0, 10
kstart = 0
endif

if changed(kstop) == 1 then
turnoff2 "drone", 0, 1
kstop = 0
endif

endin





instr 2

ktest chnget "test"
kupdate chnget "update"
alive1, alive2 ins 
alive = alive1+alive2
ain = alive
      


gibuffer    ftgen    0, 0, sr*5, 2, 0    
   


gaphsW phasor 1/5
if changed(kupdate)==1 then    
 reinit    UPDATE                                                   
 endif
UPDATE:  

tablew    ain, gaphsW, gibuffer,1            ; write input audio to table





instr 1000

kupdate chnget "update"


kstart chnget "Loopstart" // 1-10
kdur chnget "Loopdur" // 0.001-0.1
kphasedif chnget "phasedif" // 0-1
kmodfreq chnget "modfreq" // 0.01-5
kdepth chnget "moddepth" // 0-1
kresmix chnget "resmix" // 0-1
kdamp chnget "damp" // 0-1
kamp chnget "amp"
kcps chnget "cps" 
kfloopamp init 1
kflooppitch init 1
klpf chnget "lowpass"

kstart init 0.2
kdur init 0.001
kdepth init 0.3
kmodfreq init 2
kresmix init 0.7
krevmix init 1
kdamp init 0.7
ksize init 1
krevdamp init 0.8
kamp init 0.7
kcps init 440


gibufferP    ftgen    0, 0, 4096, 2, 0 
aphsW phasor 0.5
amod poscil kdepth, kmodfreq
kmod downsamp amod
if changed(kupdate) == 1 then
reinit UPDATE
endif

UPDATE:
giwfn1	ftgen	0, 0, 131072, 9,   .5,      1, 0 		

aloop flooper2 kfloopamp, kflooppitch, kstart+kmod, kstart+kdur, 0.01, gibuffer

tablew aloop, aphsW, gibufferP, 1

iphsl init 0


awtl poscil3 kamp, kcps, gibufferP, iphsl
awtr poscil3 kamp, kcps, gibufferP, iphsl + 0.3

alpl butterlp awtl, klpf
alpr butterlp awtr, klpf

aoutl, aoutr freeverb alpl, alpr, ksize, krevdamp

amixl ntrpol alpl, aoutl, krevmix
amixr ntrpol alpr, aoutr, krevmix

a1l streson amixl, kcps, kdamp
a2l streson amixl, kcps*3.932, kdamp
a3l streson amixl, kcps*9.538, kdamp
a4l streson amixl, kcps*16.688, kdamp
a5l streson amixl, kcps*24.566, kdamp
a6l streson amixl, kcps*31.147, kdamp

astrl sum a1l, a2l, a3l, a4l, a5l, a6l
aresl balance amixl, astrl 

aresmixl ntrpol amixl, aresl, kresmix


a1r streson amixr, kcps+0.1, kdamp
a2r streson amixr, kcps*3.932-0.3, kdamp
a3r streson amixr, kcps*9.538+0.2, kdamp
a4r streson amixr, kcps*16.688+1, kdamp
a5r streson amixr, kcps*24.566-1, kdamp
a6r streson amixr, kcps*31.147+1, kdamp

astrr sum a1r, a2r, a3r, a4r, a5r, a6r
aresr balance amixr, astrr 

aresmixr ntrpol amixr, aresr, kresmix

aclipl clip, aresmixl, 0, 0.8
aclipr clip, aresmixr, 0, 0.8

outs aclipl, aclipr

endin


</CsInstruments>
<CsScore>
f0 z
i1 0 [60*60*24*7] 
i2 0 [60*60*24*7] 
</CsScore>
</CsoundSynthesizer>
<bsbPanel>
 <label>Widgets</label>
 <objectName/>
 <x>0</x>
 <y>0</y>
 <width>0</width>
 <height>0</height>
 <visible>true</visible>
 <uuid/>
 <bgcolor mode="nobackground">
  <r>255</r>
  <g>255</g>
  <b>255</b>
 </bgcolor>
</bsbPanel>
<bsbPresets>
</bsbPresets>
