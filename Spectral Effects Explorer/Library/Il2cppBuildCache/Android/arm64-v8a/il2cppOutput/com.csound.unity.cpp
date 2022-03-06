#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Single[]>
struct Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.GCHandle>
struct Dictionary_2_t247FD3994F43C0EE2599722B8C4855CC713A9EA5;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Single[]>
struct Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Runtime.InteropServices.GCHandle>
struct Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>
struct IDictionary_2_t19A99D437EE7EAF34E38F0AE4CC22AEB7B9D1745;
// System.Collections.Generic.IDictionary`2<System.String,System.Runtime.InteropServices.GCHandle>
struct IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205;
// System.Collections.Generic.IDictionary`2<System.String,CsoundUnityBridge/ChannelInfo>
struct IDictionary_2_t1E2EA5CCB7C6EA9E3DC9653CD72EA3492C29C001;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>
struct IList_1_t8D4F7E3BAC9A5D0903FC581E54A66B88D776C53C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single[]>
struct KeyCollection_tC3D8CD47B7BE762CC3D5826D5E6B37A3498DC5AD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Runtime.InteropServices.GCHandle>
struct KeyCollection_t37336065C369CAA439822FFC9BE6480BF2C1A2B0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019;
// System.Collections.Generic.List`1<CsoundChannelController>
struct List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<CsoundUnityBridge/OpcodeArgumentTypes>
struct List_1_tAE75B547557D67F43631ACFA1EA0809215A09658;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D;
// System.Collections.Generic.SortedDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>
struct SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15;
// System.Collections.Generic.SortedDictionary`2<System.String,CsoundUnityBridge/ChannelInfo>
struct SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>>
struct TreeSet_1_t7BBA08AB7D8C09E623F125D4D9683601A7042093;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,CsoundUnityBridge/ChannelInfo>>
struct TreeSet_1_t46DE2356FE38A00E8BC9AD92FC719D0E6C66E548;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>
struct ValueCollection_t7BB98191359E8EBAC3F3697F7E84AD9783FB1FF5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single[]>
struct ValueCollection_t502A1E79BD833331B3514E0F429923D2855428B6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Runtime.InteropServices.GCHandle>
struct ValueCollection_tD7E4B26EC5BB1ACC54DE3008D86EA70F86CF64F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,CsoundUnityBridge/ChannelInfo>
struct ValueCollection_t9EA4CCAEF2EA29B232770FD71FF730C4695FBDD3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single[]>[]
struct EntryU5BU5D_t91136034227A4454155794351E5B6D5B64644E26;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Runtime.InteropServices.GCHandle>[]
struct EntryU5BU5D_t07840CFE2B93A852A331C634305C714F6059A6C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// CsoundChannelController[]
struct CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// CsoundUnityBridge/OpcodeArgumentTypes[]
struct OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// csoundcsharp.Csound6
struct Csound6_tFE03017ABE82E682CA12F6CC22FC2BFD684D0131;
// CsoundChannelController
struct CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C;
// CsoundUnity
struct CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514;
// CsoundUnityBridge
struct CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217;
// CsoundUnityChild
struct CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// csoundcsharp.Csound6/FileOpenCallbackProxy
struct FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA;
// csoundcsharp.Csound6/MessageCallbackProxy
struct MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C;
// csoundcsharp.Csound6/NativeMethods
struct NativeMethods_tCA0B7DAC30AF7A21D2F603AA35AE8615EE4E7F2D;
// csoundcsharp.Csound6/RtcloseCallbackProxy
struct RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164;
// csoundcsharp.Csound6/SenseEventCallbackProxy
struct SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF;
// csoundcsharp.Csound6/YieldCallback
struct YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E;
// CsoundUnity/<GetSamples>d__105
struct U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9;
// CsoundUnity/<Logging>d__113
struct U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563;
// CsoundUnity/CsoundInitialized
struct CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2;
// CsoundUnityBridge/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51;
// CsoundUnityBridge/CSOUND_PARAMS
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F;
// CsoundUnityBridge/ChannelHints
struct ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301;
// CsoundUnityBridge/ChannelInfo
struct ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146;
// CsoundUnityBridge/ChannelInfoProxy
struct ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496;
// CsoundUnityBridge/Csound6SenseEventCallbackHandler
struct Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F;
// CsoundUnityBridge/Csound6SenseEventsArgs
struct Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2;
// CsoundUnityBridge/NamedGenProxy
struct NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF;
// CsoundUnityBridge/OpcodeArgumentTypes
struct OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6;
// CsoundUnityBridge/OpcodeListProxy
struct OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvType_tB0980C2CEC4555E8A6FD4395CE2F9057546AEAB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t0CCED619890C2AA337251D4A1AA917252B3D02B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6968F0F8ED994F2029FD9DA7E8888A9BB4A6BE77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t1E2EA5CCB7C6EA9E3DC9653CD72EA3492C29C001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF6345805D8529C44416E8917784B16113A686444_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73CB209F178740EDD5A66AF18B4E8F82F83B1478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAE75B547557D67F43631ACFA1EA0809215A09658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral020E70D0DFAE9BD5278E23A3EBC6F083E254D991;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1E49F52FBED4E2D65BE24E440C2ECB49C93CA5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C042DAC0A560664DA21AF35EFB194D9B3705FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral14C078415BDD4CA31DD984B72A6C3A0542B78A2D;
IL2CPP_EXTERN_C String_t* _stringLiteral15481F17D604745DD863415C00F6407B50AF5E08;
IL2CPP_EXTERN_C String_t* _stringLiteral1E1A03BFFD4DF94BCC79E7529A5968B1E3E390EB;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26031819C994820EEDDCC91A78B187D2C34F0AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral29EB8705C3C3C51078042C550ADAE5EF11D49BC8;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE83204B8085BFA77E9F30CB040FB6D84C0B8FA;
IL2CPP_EXTERN_C String_t* _stringLiteral2EC4033EBC13E40CDCF2BFE38407870D255B626C;
IL2CPP_EXTERN_C String_t* _stringLiteral30B3C9851B6C9F7B36BF9AA009959222E44FDBC2;
IL2CPP_EXTERN_C String_t* _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01;
IL2CPP_EXTERN_C String_t* _stringLiteral366CFA846440793E062002B50B772FC743DE407F;
IL2CPP_EXTERN_C String_t* _stringLiteral368C49E23882A8CED5E0873E8F402991BB857F28;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
IL2CPP_EXTERN_C String_t* _stringLiteral4CCC12E5C23271CD6DD0BF9DB8F833EB7921A314;
IL2CPP_EXTERN_C String_t* _stringLiteral50298BAA13081A68EAE8F150FEF3B4509A577316;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7DB3D1E6E4662ED36CB418794A1010D7F283A2;
IL2CPP_EXTERN_C String_t* _stringLiteral82D3011E77823B99443FA76816A347F4B0E0CD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral8364E60ECD305F5B3DE480A65818800D826F6450;
IL2CPP_EXTERN_C String_t* _stringLiteral83A1CE853F9597B27CEC6B2940D6A044A0D8B55D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF51D828E4C0C54643490DF51A616C037A9FA76;
IL2CPP_EXTERN_C String_t* _stringLiteral8D8DD5EF45A347A03273AB119723DB94B146A55A;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB1A5487930B852F687C62A8F9B7B518E3CE63E;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC9AC6DAEB5A46966E41406699E8D76F2BBB0C5;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9984D8D392A564CD414347CA62734784B79A3B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A;
IL2CPP_EXTERN_C String_t* _stringLiteralB1F2A9774735699184D8D9B49070909054ED1948;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0F36134CE3CE52AE20222DF2DE67DF30E37F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB871F6066ACD97CFD681C83DC15C7FA994ED55;
IL2CPP_EXTERN_C String_t* _stringLiteralBABB70B88C330EA65482ECFCDFA87677CD7901D4;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD657A53A9279F0D6459D387B917C7F7EB82B71C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD987F2F608F8882970D18E72818138712D3C0936;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF4FB275A923C640E2F8E4EFEBBA10978829DB;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1529D74B641AB6519C5679DB4983CF2DCD11ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE11208C54B443A7F26C518FD88FAF2B52668365D;
IL2CPP_EXTERN_C String_t* _stringLiteralE90C1239819816D8576FF43BCAF9A379E8A945E4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A63104A159E9EBDA6DA089236073E13AC4D7F9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A4DE85CB0F8977896A1D2190F3BFF897C792FA;
IL2CPP_EXTERN_C String_t* _stringLiteralF4F22069B1CDA51FC6A6B52CF60F6EFBF7BF3FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF585490DBD47568A9115D41FE285A01E5A3D94D1;
IL2CPP_EXTERN_C String_t* _stringLiteralF7166306B6FA3F46CB4A3F98517F88550A1B84A4;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CsoundUnityBridge_RawSenseEventsCallback_m24541F0AED618B8ED20109FD1289641A051636F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m12C50E3E0C77225A40D2D8376CD7DDD3302DBDCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m00F3C1D6871DFCE5FE0EDC436E023F4CA3D9EB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514_m64DBB87317AF84D19DE4E9DEA40F85F602692C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE54AF0F12D36E6C373EAE66E716139EEFA6C724E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE89AB76DCBBC9B3561BFEFC9C3F9001F8366E775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mBE4C636F807969CDF5361F3BD7AC6A01DA9D3126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAD1F34BDD6BE418C53C15AF3E5DA07DBD5F46BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m77E8F4856F3368ED3384C38E426ACD2291BAADA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m219AAE29A066F48A86F2454DCD12C07825DF88DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAsync_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_mD68D1E6639A644A11DC097CF29805AD594A3F496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_m958B5B246EB03176958590BA8E5DACEF2FD74523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_mDFF077AFB1F91693AC83D3EBC896F2DCBDE373C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m0707084E400A6EBCDDBEF7ED5DD6CC179969FCB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mA82B45C5BD1F87AD6CF5B8FEF45E2839CDF5AC07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_mB455C382DCBB0856EA7D739AE1DB1181709C2980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetSamplesU3Ed__105_System_Collections_IEnumerator_Reset_m86E1E813A607E09CBF1580ED8718965C1239DE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoggingU3Ed__113_System_Collections_IEnumerator_Reset_m05DE0705C3F76DF4ECF9A998FA728025839C7209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CSetYieldCallbackU3Eb__0_mA3B38F892EF32B316761CC2D37FBCE143EAECEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_0_0_0_var;
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F;;
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke;
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke;;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5A2F5BA387DD971429DDCF787BE61576DBC4FBD5 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Single[]>
struct Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t91136034227A4454155794351E5B6D5B64644E26* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC3D8CD47B7BE762CC3D5826D5E6B37A3498DC5AD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t502A1E79BD833331B3514E0F429923D2855428B6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___entries_1)); }
	inline EntryU5BU5D_t91136034227A4454155794351E5B6D5B64644E26* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t91136034227A4454155794351E5B6D5B64644E26** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t91136034227A4454155794351E5B6D5B64644E26* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___keys_7)); }
	inline KeyCollection_tC3D8CD47B7BE762CC3D5826D5E6B37A3498DC5AD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC3D8CD47B7BE762CC3D5826D5E6B37A3498DC5AD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC3D8CD47B7BE762CC3D5826D5E6B37A3498DC5AD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ___values_8)); }
	inline ValueCollection_t502A1E79BD833331B3514E0F429923D2855428B6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t502A1E79BD833331B3514E0F429923D2855428B6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t502A1E79BD833331B3514E0F429923D2855428B6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Runtime.InteropServices.GCHandle>
struct Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t07840CFE2B93A852A331C634305C714F6059A6C2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t37336065C369CAA439822FFC9BE6480BF2C1A2B0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD7E4B26EC5BB1ACC54DE3008D86EA70F86CF64F3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___entries_1)); }
	inline EntryU5BU5D_t07840CFE2B93A852A331C634305C714F6059A6C2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t07840CFE2B93A852A331C634305C714F6059A6C2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t07840CFE2B93A852A331C634305C714F6059A6C2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___keys_7)); }
	inline KeyCollection_t37336065C369CAA439822FFC9BE6480BF2C1A2B0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t37336065C369CAA439822FFC9BE6480BF2C1A2B0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t37336065C369CAA439822FFC9BE6480BF2C1A2B0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ___values_8)); }
	inline ValueCollection_tD7E4B26EC5BB1ACC54DE3008D86EA70F86CF64F3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD7E4B26EC5BB1ACC54DE3008D86EA70F86CF64F3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD7E4B26EC5BB1ACC54DE3008D86EA70F86CF64F3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___entries_1)); }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___keys_7)); }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___values_8)); }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Char>
struct EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____items_1)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get__items_1() const { return ____items_1; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<CsoundChannelController>
struct List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E, ____items_1)); }
	inline CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1* get__items_1() const { return ____items_1; }
	inline CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_StaticFields, ____emptyArray_5)); }
	inline CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CsoundChannelControllerU5BU5D_t0D9877824345396D570FB2F3A792FB57E8CB8AF1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<CsoundUnityBridge/OpcodeArgumentTypes>
struct List_1_tAE75B547557D67F43631ACFA1EA0809215A09658  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAE75B547557D67F43631ACFA1EA0809215A09658, ____items_1)); }
	inline OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468* get__items_1() const { return ____items_1; }
	inline OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAE75B547557D67F43631ACFA1EA0809215A09658, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAE75B547557D67F43631ACFA1EA0809215A09658, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAE75B547557D67F43631ACFA1EA0809215A09658, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAE75B547557D67F43631ACFA1EA0809215A09658_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAE75B547557D67F43631ACFA1EA0809215A09658_StaticFields, ____emptyArray_5)); }
	inline OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OpcodeArgumentTypesU5BU5D_tA4EB64669E72BC361BF5BA87049500C449EAC468* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>
struct SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t7BB98191359E8EBAC3F3697F7E84AD9783FB1FF5 * ____values_0;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t7BBA08AB7D8C09E623F125D4D9683601A7042093 * ____set_1;

public:
	inline static int32_t get_offset_of__values_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15, ____values_0)); }
	inline ValueCollection_t7BB98191359E8EBAC3F3697F7E84AD9783FB1FF5 * get__values_0() const { return ____values_0; }
	inline ValueCollection_t7BB98191359E8EBAC3F3697F7E84AD9783FB1FF5 ** get_address_of__values_0() { return &____values_0; }
	inline void set__values_0(ValueCollection_t7BB98191359E8EBAC3F3697F7E84AD9783FB1FF5 * value)
	{
		____values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_0), (void*)value);
	}

	inline static int32_t get_offset_of__set_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15, ____set_1)); }
	inline TreeSet_1_t7BBA08AB7D8C09E623F125D4D9683601A7042093 * get__set_1() const { return ____set_1; }
	inline TreeSet_1_t7BBA08AB7D8C09E623F125D4D9683601A7042093 ** get_address_of__set_1() { return &____set_1; }
	inline void set__set_1(TreeSet_1_t7BBA08AB7D8C09E623F125D4D9683601A7042093 * value)
	{
		____set_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_1), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.String,CsoundUnityBridge/ChannelInfo>
struct SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t9EA4CCAEF2EA29B232770FD71FF730C4695FBDD3 * ____values_0;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t46DE2356FE38A00E8BC9AD92FC719D0E6C66E548 * ____set_1;

public:
	inline static int32_t get_offset_of__values_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB, ____values_0)); }
	inline ValueCollection_t9EA4CCAEF2EA29B232770FD71FF730C4695FBDD3 * get__values_0() const { return ____values_0; }
	inline ValueCollection_t9EA4CCAEF2EA29B232770FD71FF730C4695FBDD3 ** get_address_of__values_0() { return &____values_0; }
	inline void set__values_0(ValueCollection_t9EA4CCAEF2EA29B232770FD71FF730C4695FBDD3 * value)
	{
		____values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_0), (void*)value);
	}

	inline static int32_t get_offset_of__set_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB, ____set_1)); }
	inline TreeSet_1_t46DE2356FE38A00E8BC9AD92FC719D0E6C66E548 * get__set_1() const { return ____set_1; }
	inline TreeSet_1_t46DE2356FE38A00E8BC9AD92FC719D0E6C66E548 ** get_address_of__set_1() { return &____set_1; }
	inline void set__set_1(TreeSet_1_t46DE2356FE38A00E8BC9AD92FC719D0E6C66E548 * value)
	{
		____set_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// csoundcsharp.Csound6
struct Csound6_tFE03017ABE82E682CA12F6CC22FC2BFD684D0131  : public RuntimeObject
{
public:

public:
};


// CsoundChannelController
struct CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C  : public RuntimeObject
{
public:
	// System.String CsoundChannelController::type
	String_t* ___type_0;
	// System.String CsoundChannelController::channel
	String_t* ___channel_1;
	// System.String CsoundChannelController::text
	String_t* ___text_2;
	// System.String CsoundChannelController::caption
	String_t* ___caption_3;
	// System.Single CsoundChannelController::min
	float ___min_4;
	// System.Single CsoundChannelController::max
	float ___max_5;
	// System.Single CsoundChannelController::value
	float ___value_6;
	// System.Single CsoundChannelController::skew
	float ___skew_7;
	// System.Single CsoundChannelController::increment
	float ___increment_8;
	// System.String[] CsoundChannelController::options
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___options_9;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___channel_1)); }
	inline String_t* get_channel_1() const { return ___channel_1; }
	inline String_t** get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(String_t* value)
	{
		___channel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channel_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_caption_3() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___caption_3)); }
	inline String_t* get_caption_3() const { return ___caption_3; }
	inline String_t** get_address_of_caption_3() { return &___caption_3; }
	inline void set_caption_3(String_t* value)
	{
		___caption_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caption_3), (void*)value);
	}

	inline static int32_t get_offset_of_min_4() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___min_4)); }
	inline float get_min_4() const { return ___min_4; }
	inline float* get_address_of_min_4() { return &___min_4; }
	inline void set_min_4(float value)
	{
		___min_4 = value;
	}

	inline static int32_t get_offset_of_max_5() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___max_5)); }
	inline float get_max_5() const { return ___max_5; }
	inline float* get_address_of_max_5() { return &___max_5; }
	inline void set_max_5(float value)
	{
		___max_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___value_6)); }
	inline float get_value_6() const { return ___value_6; }
	inline float* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(float value)
	{
		___value_6 = value;
	}

	inline static int32_t get_offset_of_skew_7() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___skew_7)); }
	inline float get_skew_7() const { return ___skew_7; }
	inline float* get_address_of_skew_7() { return &___skew_7; }
	inline void set_skew_7(float value)
	{
		___skew_7 = value;
	}

	inline static int32_t get_offset_of_increment_8() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___increment_8)); }
	inline float get_increment_8() const { return ___increment_8; }
	inline float* get_address_of_increment_8() { return &___increment_8; }
	inline void set_increment_8(float value)
	{
		___increment_8 = value;
	}

	inline static int32_t get_offset_of_options_9() { return static_cast<int32_t>(offsetof(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C, ___options_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_options_9() const { return ___options_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_options_9() { return &___options_9; }
	inline void set_options_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___options_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_9), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// csoundcsharp.Csound6/NativeMethods
struct NativeMethods_tCA0B7DAC30AF7A21D2F603AA35AE8615EE4E7F2D  : public RuntimeObject
{
public:

public:
};


// CsoundUnity/<Logging>d__113
struct U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563  : public RuntimeObject
{
public:
	// System.Int32 CsoundUnity/<Logging>d__113::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CsoundUnity/<Logging>d__113::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CsoundUnity CsoundUnity/<Logging>d__113::<>4__this
	CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * ___U3CU3E4__this_2;
	// System.Single CsoundUnity/<Logging>d__113::interval
	float ___interval_3;
	// System.Int32 CsoundUnity/<Logging>d__113::<i>5__2
	int32_t ___U3CiU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563, ___U3CU3E4__this_2)); }
	inline CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563, ___interval_3)); }
	inline float get_interval_3() const { return ___interval_3; }
	inline float* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(float value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563, ___U3CiU3E5__2_4)); }
	inline int32_t get_U3CiU3E5__2_4() const { return ___U3CiU3E5__2_4; }
	inline int32_t* get_address_of_U3CiU3E5__2_4() { return &___U3CiU3E5__2_4; }
	inline void set_U3CiU3E5__2_4(int32_t value)
	{
		___U3CiU3E5__2_4 = value;
	}
};


// CsoundUnityBridge/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51  : public RuntimeObject
{
public:
	// System.Action CsoundUnityBridge/<>c__DisplayClass32_0::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51, ___callback_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_0() const { return ___callback_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// CsoundUnityBridge/CSOUND_PARAMS
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F  : public RuntimeObject
{
public:
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::debug_mode
	int32_t ___debug_mode_0;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::buffer_frames
	int32_t ___buffer_frames_1;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::hardware_buffer_frames
	int32_t ___hardware_buffer_frames_2;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::displays
	int32_t ___displays_3;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::ascii_graphs
	int32_t ___ascii_graphs_4;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::postscript_graphs
	int32_t ___postscript_graphs_5;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::message_level
	int32_t ___message_level_6;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::tempo
	int32_t ___tempo_7;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::ring_bell
	int32_t ___ring_bell_8;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::use_cscore
	int32_t ___use_cscore_9;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::terminate_on_midi
	int32_t ___terminate_on_midi_10;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::heartbeat
	int32_t ___heartbeat_11;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::defer_gen01_load
	int32_t ___defer_gen01_load_12;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::midi_key
	int32_t ___midi_key_13;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::midi_key_cps
	int32_t ___midi_key_cps_14;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::midi_key_oct
	int32_t ___midi_key_oct_15;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::midi_key_pch
	int32_t ___midi_key_pch_16;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::midi_velocity
	int32_t ___midi_velocity_17;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::midi_velocity_amp
	int32_t ___midi_velocity_amp_18;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::no_default_paths
	int32_t ___no_default_paths_19;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::number_of_threads
	int32_t ___number_of_threads_20;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::syntax_check_only
	int32_t ___syntax_check_only_21;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::csd_line_counts
	int32_t ___csd_line_counts_22;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::compute_weights
	int32_t ___compute_weights_23;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::realtime_mode
	int32_t ___realtime_mode_24;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::sample_accurate
	int32_t ___sample_accurate_25;
	// System.Double CsoundUnityBridge/CSOUND_PARAMS::sample_rate_override
	double ___sample_rate_override_26;
	// System.Double CsoundUnityBridge/CSOUND_PARAMS::control_rate_override
	double ___control_rate_override_27;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::nchnls_override
	int32_t ___nchnls_override_28;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::nchnls_i_override
	int32_t ___nchnls_i_override_29;
	// System.Double CsoundUnityBridge/CSOUND_PARAMS::e0dbfs_override
	double ___e0dbfs_override_30;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::daemon
	int32_t ___daemon_31;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::ksmps_override
	int32_t ___ksmps_override_32;
	// System.Int32 CsoundUnityBridge/CSOUND_PARAMS::FFT_library
	int32_t ___FFT_library_33;

public:
	inline static int32_t get_offset_of_debug_mode_0() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___debug_mode_0)); }
	inline int32_t get_debug_mode_0() const { return ___debug_mode_0; }
	inline int32_t* get_address_of_debug_mode_0() { return &___debug_mode_0; }
	inline void set_debug_mode_0(int32_t value)
	{
		___debug_mode_0 = value;
	}

	inline static int32_t get_offset_of_buffer_frames_1() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___buffer_frames_1)); }
	inline int32_t get_buffer_frames_1() const { return ___buffer_frames_1; }
	inline int32_t* get_address_of_buffer_frames_1() { return &___buffer_frames_1; }
	inline void set_buffer_frames_1(int32_t value)
	{
		___buffer_frames_1 = value;
	}

	inline static int32_t get_offset_of_hardware_buffer_frames_2() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___hardware_buffer_frames_2)); }
	inline int32_t get_hardware_buffer_frames_2() const { return ___hardware_buffer_frames_2; }
	inline int32_t* get_address_of_hardware_buffer_frames_2() { return &___hardware_buffer_frames_2; }
	inline void set_hardware_buffer_frames_2(int32_t value)
	{
		___hardware_buffer_frames_2 = value;
	}

	inline static int32_t get_offset_of_displays_3() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___displays_3)); }
	inline int32_t get_displays_3() const { return ___displays_3; }
	inline int32_t* get_address_of_displays_3() { return &___displays_3; }
	inline void set_displays_3(int32_t value)
	{
		___displays_3 = value;
	}

	inline static int32_t get_offset_of_ascii_graphs_4() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___ascii_graphs_4)); }
	inline int32_t get_ascii_graphs_4() const { return ___ascii_graphs_4; }
	inline int32_t* get_address_of_ascii_graphs_4() { return &___ascii_graphs_4; }
	inline void set_ascii_graphs_4(int32_t value)
	{
		___ascii_graphs_4 = value;
	}

	inline static int32_t get_offset_of_postscript_graphs_5() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___postscript_graphs_5)); }
	inline int32_t get_postscript_graphs_5() const { return ___postscript_graphs_5; }
	inline int32_t* get_address_of_postscript_graphs_5() { return &___postscript_graphs_5; }
	inline void set_postscript_graphs_5(int32_t value)
	{
		___postscript_graphs_5 = value;
	}

	inline static int32_t get_offset_of_message_level_6() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___message_level_6)); }
	inline int32_t get_message_level_6() const { return ___message_level_6; }
	inline int32_t* get_address_of_message_level_6() { return &___message_level_6; }
	inline void set_message_level_6(int32_t value)
	{
		___message_level_6 = value;
	}

	inline static int32_t get_offset_of_tempo_7() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___tempo_7)); }
	inline int32_t get_tempo_7() const { return ___tempo_7; }
	inline int32_t* get_address_of_tempo_7() { return &___tempo_7; }
	inline void set_tempo_7(int32_t value)
	{
		___tempo_7 = value;
	}

	inline static int32_t get_offset_of_ring_bell_8() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___ring_bell_8)); }
	inline int32_t get_ring_bell_8() const { return ___ring_bell_8; }
	inline int32_t* get_address_of_ring_bell_8() { return &___ring_bell_8; }
	inline void set_ring_bell_8(int32_t value)
	{
		___ring_bell_8 = value;
	}

	inline static int32_t get_offset_of_use_cscore_9() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___use_cscore_9)); }
	inline int32_t get_use_cscore_9() const { return ___use_cscore_9; }
	inline int32_t* get_address_of_use_cscore_9() { return &___use_cscore_9; }
	inline void set_use_cscore_9(int32_t value)
	{
		___use_cscore_9 = value;
	}

	inline static int32_t get_offset_of_terminate_on_midi_10() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___terminate_on_midi_10)); }
	inline int32_t get_terminate_on_midi_10() const { return ___terminate_on_midi_10; }
	inline int32_t* get_address_of_terminate_on_midi_10() { return &___terminate_on_midi_10; }
	inline void set_terminate_on_midi_10(int32_t value)
	{
		___terminate_on_midi_10 = value;
	}

	inline static int32_t get_offset_of_heartbeat_11() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___heartbeat_11)); }
	inline int32_t get_heartbeat_11() const { return ___heartbeat_11; }
	inline int32_t* get_address_of_heartbeat_11() { return &___heartbeat_11; }
	inline void set_heartbeat_11(int32_t value)
	{
		___heartbeat_11 = value;
	}

	inline static int32_t get_offset_of_defer_gen01_load_12() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___defer_gen01_load_12)); }
	inline int32_t get_defer_gen01_load_12() const { return ___defer_gen01_load_12; }
	inline int32_t* get_address_of_defer_gen01_load_12() { return &___defer_gen01_load_12; }
	inline void set_defer_gen01_load_12(int32_t value)
	{
		___defer_gen01_load_12 = value;
	}

	inline static int32_t get_offset_of_midi_key_13() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___midi_key_13)); }
	inline int32_t get_midi_key_13() const { return ___midi_key_13; }
	inline int32_t* get_address_of_midi_key_13() { return &___midi_key_13; }
	inline void set_midi_key_13(int32_t value)
	{
		___midi_key_13 = value;
	}

	inline static int32_t get_offset_of_midi_key_cps_14() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___midi_key_cps_14)); }
	inline int32_t get_midi_key_cps_14() const { return ___midi_key_cps_14; }
	inline int32_t* get_address_of_midi_key_cps_14() { return &___midi_key_cps_14; }
	inline void set_midi_key_cps_14(int32_t value)
	{
		___midi_key_cps_14 = value;
	}

	inline static int32_t get_offset_of_midi_key_oct_15() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___midi_key_oct_15)); }
	inline int32_t get_midi_key_oct_15() const { return ___midi_key_oct_15; }
	inline int32_t* get_address_of_midi_key_oct_15() { return &___midi_key_oct_15; }
	inline void set_midi_key_oct_15(int32_t value)
	{
		___midi_key_oct_15 = value;
	}

	inline static int32_t get_offset_of_midi_key_pch_16() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___midi_key_pch_16)); }
	inline int32_t get_midi_key_pch_16() const { return ___midi_key_pch_16; }
	inline int32_t* get_address_of_midi_key_pch_16() { return &___midi_key_pch_16; }
	inline void set_midi_key_pch_16(int32_t value)
	{
		___midi_key_pch_16 = value;
	}

	inline static int32_t get_offset_of_midi_velocity_17() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___midi_velocity_17)); }
	inline int32_t get_midi_velocity_17() const { return ___midi_velocity_17; }
	inline int32_t* get_address_of_midi_velocity_17() { return &___midi_velocity_17; }
	inline void set_midi_velocity_17(int32_t value)
	{
		___midi_velocity_17 = value;
	}

	inline static int32_t get_offset_of_midi_velocity_amp_18() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___midi_velocity_amp_18)); }
	inline int32_t get_midi_velocity_amp_18() const { return ___midi_velocity_amp_18; }
	inline int32_t* get_address_of_midi_velocity_amp_18() { return &___midi_velocity_amp_18; }
	inline void set_midi_velocity_amp_18(int32_t value)
	{
		___midi_velocity_amp_18 = value;
	}

	inline static int32_t get_offset_of_no_default_paths_19() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___no_default_paths_19)); }
	inline int32_t get_no_default_paths_19() const { return ___no_default_paths_19; }
	inline int32_t* get_address_of_no_default_paths_19() { return &___no_default_paths_19; }
	inline void set_no_default_paths_19(int32_t value)
	{
		___no_default_paths_19 = value;
	}

	inline static int32_t get_offset_of_number_of_threads_20() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___number_of_threads_20)); }
	inline int32_t get_number_of_threads_20() const { return ___number_of_threads_20; }
	inline int32_t* get_address_of_number_of_threads_20() { return &___number_of_threads_20; }
	inline void set_number_of_threads_20(int32_t value)
	{
		___number_of_threads_20 = value;
	}

	inline static int32_t get_offset_of_syntax_check_only_21() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___syntax_check_only_21)); }
	inline int32_t get_syntax_check_only_21() const { return ___syntax_check_only_21; }
	inline int32_t* get_address_of_syntax_check_only_21() { return &___syntax_check_only_21; }
	inline void set_syntax_check_only_21(int32_t value)
	{
		___syntax_check_only_21 = value;
	}

	inline static int32_t get_offset_of_csd_line_counts_22() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___csd_line_counts_22)); }
	inline int32_t get_csd_line_counts_22() const { return ___csd_line_counts_22; }
	inline int32_t* get_address_of_csd_line_counts_22() { return &___csd_line_counts_22; }
	inline void set_csd_line_counts_22(int32_t value)
	{
		___csd_line_counts_22 = value;
	}

	inline static int32_t get_offset_of_compute_weights_23() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___compute_weights_23)); }
	inline int32_t get_compute_weights_23() const { return ___compute_weights_23; }
	inline int32_t* get_address_of_compute_weights_23() { return &___compute_weights_23; }
	inline void set_compute_weights_23(int32_t value)
	{
		___compute_weights_23 = value;
	}

	inline static int32_t get_offset_of_realtime_mode_24() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___realtime_mode_24)); }
	inline int32_t get_realtime_mode_24() const { return ___realtime_mode_24; }
	inline int32_t* get_address_of_realtime_mode_24() { return &___realtime_mode_24; }
	inline void set_realtime_mode_24(int32_t value)
	{
		___realtime_mode_24 = value;
	}

	inline static int32_t get_offset_of_sample_accurate_25() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___sample_accurate_25)); }
	inline int32_t get_sample_accurate_25() const { return ___sample_accurate_25; }
	inline int32_t* get_address_of_sample_accurate_25() { return &___sample_accurate_25; }
	inline void set_sample_accurate_25(int32_t value)
	{
		___sample_accurate_25 = value;
	}

	inline static int32_t get_offset_of_sample_rate_override_26() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___sample_rate_override_26)); }
	inline double get_sample_rate_override_26() const { return ___sample_rate_override_26; }
	inline double* get_address_of_sample_rate_override_26() { return &___sample_rate_override_26; }
	inline void set_sample_rate_override_26(double value)
	{
		___sample_rate_override_26 = value;
	}

	inline static int32_t get_offset_of_control_rate_override_27() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___control_rate_override_27)); }
	inline double get_control_rate_override_27() const { return ___control_rate_override_27; }
	inline double* get_address_of_control_rate_override_27() { return &___control_rate_override_27; }
	inline void set_control_rate_override_27(double value)
	{
		___control_rate_override_27 = value;
	}

	inline static int32_t get_offset_of_nchnls_override_28() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___nchnls_override_28)); }
	inline int32_t get_nchnls_override_28() const { return ___nchnls_override_28; }
	inline int32_t* get_address_of_nchnls_override_28() { return &___nchnls_override_28; }
	inline void set_nchnls_override_28(int32_t value)
	{
		___nchnls_override_28 = value;
	}

	inline static int32_t get_offset_of_nchnls_i_override_29() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___nchnls_i_override_29)); }
	inline int32_t get_nchnls_i_override_29() const { return ___nchnls_i_override_29; }
	inline int32_t* get_address_of_nchnls_i_override_29() { return &___nchnls_i_override_29; }
	inline void set_nchnls_i_override_29(int32_t value)
	{
		___nchnls_i_override_29 = value;
	}

	inline static int32_t get_offset_of_e0dbfs_override_30() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___e0dbfs_override_30)); }
	inline double get_e0dbfs_override_30() const { return ___e0dbfs_override_30; }
	inline double* get_address_of_e0dbfs_override_30() { return &___e0dbfs_override_30; }
	inline void set_e0dbfs_override_30(double value)
	{
		___e0dbfs_override_30 = value;
	}

	inline static int32_t get_offset_of_daemon_31() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___daemon_31)); }
	inline int32_t get_daemon_31() const { return ___daemon_31; }
	inline int32_t* get_address_of_daemon_31() { return &___daemon_31; }
	inline void set_daemon_31(int32_t value)
	{
		___daemon_31 = value;
	}

	inline static int32_t get_offset_of_ksmps_override_32() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___ksmps_override_32)); }
	inline int32_t get_ksmps_override_32() const { return ___ksmps_override_32; }
	inline int32_t* get_address_of_ksmps_override_32() { return &___ksmps_override_32; }
	inline void set_ksmps_override_32(int32_t value)
	{
		___ksmps_override_32 = value;
	}

	inline static int32_t get_offset_of_FFT_library_33() { return static_cast<int32_t>(offsetof(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F, ___FFT_library_33)); }
	inline int32_t get_FFT_library_33() const { return ___FFT_library_33; }
	inline int32_t* get_address_of_FFT_library_33() { return &___FFT_library_33; }
	inline void set_FFT_library_33(int32_t value)
	{
		___FFT_library_33 = value;
	}
};

// Native definition for P/Invoke marshalling of CsoundUnityBridge/CSOUND_PARAMS
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke
{
	int32_t ___debug_mode_0;
	int32_t ___buffer_frames_1;
	int32_t ___hardware_buffer_frames_2;
	int32_t ___displays_3;
	int32_t ___ascii_graphs_4;
	int32_t ___postscript_graphs_5;
	int32_t ___message_level_6;
	int32_t ___tempo_7;
	int32_t ___ring_bell_8;
	int32_t ___use_cscore_9;
	int32_t ___terminate_on_midi_10;
	int32_t ___heartbeat_11;
	int32_t ___defer_gen01_load_12;
	int32_t ___midi_key_13;
	int32_t ___midi_key_cps_14;
	int32_t ___midi_key_oct_15;
	int32_t ___midi_key_pch_16;
	int32_t ___midi_velocity_17;
	int32_t ___midi_velocity_amp_18;
	int32_t ___no_default_paths_19;
	int32_t ___number_of_threads_20;
	int32_t ___syntax_check_only_21;
	int32_t ___csd_line_counts_22;
	int32_t ___compute_weights_23;
	int32_t ___realtime_mode_24;
	int32_t ___sample_accurate_25;
	double ___sample_rate_override_26;
	double ___control_rate_override_27;
	int32_t ___nchnls_override_28;
	int32_t ___nchnls_i_override_29;
	double ___e0dbfs_override_30;
	int32_t ___daemon_31;
	int32_t ___ksmps_override_32;
	int32_t ___FFT_library_33;
};
// Native definition for COM marshalling of CsoundUnityBridge/CSOUND_PARAMS
struct CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_com
{
	int32_t ___debug_mode_0;
	int32_t ___buffer_frames_1;
	int32_t ___hardware_buffer_frames_2;
	int32_t ___displays_3;
	int32_t ___ascii_graphs_4;
	int32_t ___postscript_graphs_5;
	int32_t ___message_level_6;
	int32_t ___tempo_7;
	int32_t ___ring_bell_8;
	int32_t ___use_cscore_9;
	int32_t ___terminate_on_midi_10;
	int32_t ___heartbeat_11;
	int32_t ___defer_gen01_load_12;
	int32_t ___midi_key_13;
	int32_t ___midi_key_cps_14;
	int32_t ___midi_key_oct_15;
	int32_t ___midi_key_pch_16;
	int32_t ___midi_velocity_17;
	int32_t ___midi_velocity_amp_18;
	int32_t ___no_default_paths_19;
	int32_t ___number_of_threads_20;
	int32_t ___syntax_check_only_21;
	int32_t ___csd_line_counts_22;
	int32_t ___compute_weights_23;
	int32_t ___realtime_mode_24;
	int32_t ___sample_accurate_25;
	double ___sample_rate_override_26;
	double ___control_rate_override_27;
	int32_t ___nchnls_override_28;
	int32_t ___nchnls_i_override_29;
	double ___e0dbfs_override_30;
	int32_t ___daemon_31;
	int32_t ___ksmps_override_32;
	int32_t ___FFT_library_33;
};

// CsoundUnityBridge/OpcodeArgumentTypes
struct OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6  : public RuntimeObject
{
public:
	// System.String CsoundUnityBridge/OpcodeArgumentTypes::outypes
	String_t* ___outypes_0;
	// System.String CsoundUnityBridge/OpcodeArgumentTypes::intypes
	String_t* ___intypes_1;
	// System.Int32 CsoundUnityBridge/OpcodeArgumentTypes::flags
	int32_t ___flags_2;

public:
	inline static int32_t get_offset_of_outypes_0() { return static_cast<int32_t>(offsetof(OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6, ___outypes_0)); }
	inline String_t* get_outypes_0() const { return ___outypes_0; }
	inline String_t** get_address_of_outypes_0() { return &___outypes_0; }
	inline void set_outypes_0(String_t* value)
	{
		___outypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outypes_0), (void*)value);
	}

	inline static int32_t get_offset_of_intypes_1() { return static_cast<int32_t>(offsetof(OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6, ___intypes_1)); }
	inline String_t* get_intypes_1() const { return ___intypes_1; }
	inline String_t** get_address_of_intypes_1() { return &___intypes_1; }
	inline void set_intypes_1(String_t* value)
	{
		___intypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// CsoundFilesInfo
struct CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68 
{
public:
	// System.String[] CsoundFilesInfo::fileNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___fileNames_0;

public:
	inline static int32_t get_offset_of_fileNames_0() { return static_cast<int32_t>(offsetof(CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68, ___fileNames_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_fileNames_0() const { return ___fileNames_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_fileNames_0() { return &___fileNames_0; }
	inline void set_fileNames_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___fileNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of CsoundFilesInfo
struct CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_pinvoke
{
	char** ___fileNames_0;
};
// Native definition for COM marshalling of CsoundFilesInfo
struct CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_com
{
	Il2CppChar** ___fileNames_0;
};

// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// CsoundUnityBridge/Csound6SenseEventsArgs
struct Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Object CsoundUnityBridge/Csound6SenseEventsArgs::UserData
	RuntimeObject * ___UserData_1;

public:
	inline static int32_t get_offset_of_UserData_1() { return static_cast<int32_t>(offsetof(Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2, ___UserData_1)); }
	inline RuntimeObject * get_UserData_1() const { return ___UserData_1; }
	inline RuntimeObject ** get_address_of_UserData_1() { return &___UserData_1; }
	inline void set_UserData_1(RuntimeObject * value)
	{
		___UserData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserData_1), (void*)value);
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.AudioVelocityUpdateMode
struct AudioVelocityUpdateMode_tD7789ACF723BBB71A61298EC9C5E6B4E249CD187 
{
public:
	// System.Int32 UnityEngine.AudioVelocityUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioVelocityUpdateMode_tD7789ACF723BBB71A61298EC9C5E6B4E249CD187, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// CsoundUnityBridge
struct CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217  : public RuntimeObject
{
public:
	// System.IntPtr CsoundUnityBridge::csound
	intptr_t ___csound_0;
	// System.String CsoundUnityBridge::baseDir
	String_t* ___baseDir_1;
	// System.Boolean CsoundUnityBridge::compiledOk
	bool ___compiledOk_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.Runtime.InteropServices.GCHandle> CsoundUnityBridge::m_callbacks
	RuntimeObject* ___m_callbacks_3;
	// System.ComponentModel.EventHandlerList CsoundUnityBridge::m_callbackHandlers
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___m_callbackHandlers_4;

public:
	inline static int32_t get_offset_of_csound_0() { return static_cast<int32_t>(offsetof(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217, ___csound_0)); }
	inline intptr_t get_csound_0() const { return ___csound_0; }
	inline intptr_t* get_address_of_csound_0() { return &___csound_0; }
	inline void set_csound_0(intptr_t value)
	{
		___csound_0 = value;
	}

	inline static int32_t get_offset_of_baseDir_1() { return static_cast<int32_t>(offsetof(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217, ___baseDir_1)); }
	inline String_t* get_baseDir_1() const { return ___baseDir_1; }
	inline String_t** get_address_of_baseDir_1() { return &___baseDir_1; }
	inline void set_baseDir_1(String_t* value)
	{
		___baseDir_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseDir_1), (void*)value);
	}

	inline static int32_t get_offset_of_compiledOk_2() { return static_cast<int32_t>(offsetof(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217, ___compiledOk_2)); }
	inline bool get_compiledOk_2() const { return ___compiledOk_2; }
	inline bool* get_address_of_compiledOk_2() { return &___compiledOk_2; }
	inline void set_compiledOk_2(bool value)
	{
		___compiledOk_2 = value;
	}

	inline static int32_t get_offset_of_m_callbacks_3() { return static_cast<int32_t>(offsetof(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217, ___m_callbacks_3)); }
	inline RuntimeObject* get_m_callbacks_3() const { return ___m_callbacks_3; }
	inline RuntimeObject** get_address_of_m_callbacks_3() { return &___m_callbacks_3; }
	inline void set_m_callbacks_3(RuntimeObject* value)
	{
		___m_callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_callbackHandlers_4() { return static_cast<int32_t>(offsetof(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217, ___m_callbackHandlers_4)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_m_callbackHandlers_4() const { return ___m_callbackHandlers_4; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_m_callbackHandlers_4() { return &___m_callbackHandlers_4; }
	inline void set_m_callbackHandlers_4(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___m_callbackHandlers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackHandlers_4), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CsoundUnity/EnvType
struct EnvType_tB0980C2CEC4555E8A6FD4395CE2F9057546AEAB2 
{
public:
	// System.Int32 CsoundUnity/EnvType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnvType_tB0980C2CEC4555E8A6FD4395CE2F9057546AEAB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CsoundUnity/SamplesOrigin
struct SamplesOrigin_tC2DBED47217EFA933563CEDBFA5737D7352DE906 
{
public:
	// System.Int32 CsoundUnity/SamplesOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplesOrigin_tC2DBED47217EFA933563CEDBFA5737D7352DE906, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CsoundUnityBridge/ChannelBehavior
struct ChannelBehavior_t9420AC5A7F78CDA9D2D1F401F26BC6191DF1CCFE 
{
public:
	// System.Int32 CsoundUnityBridge/ChannelBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChannelBehavior_t9420AC5A7F78CDA9D2D1F401F26BC6191DF1CCFE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CsoundUnityBridge/ChannelDirection
struct ChannelDirection_tD24F0388CA40F49C8F6512A5ABF6131DCACAC36C 
{
public:
	// System.Int32 CsoundUnityBridge/ChannelDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChannelDirection_tD24F0388CA40F49C8F6512A5ABF6131DCACAC36C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CsoundUnityBridge/ChannelHintsProxy
struct ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B 
{
public:
	// System.Int32 CsoundUnityBridge/ChannelHintsProxy::behav
	int32_t ___behav_0;
	// System.Double CsoundUnityBridge/ChannelHintsProxy::dflt
	double ___dflt_1;
	// System.Double CsoundUnityBridge/ChannelHintsProxy::min
	double ___min_2;
	// System.Double CsoundUnityBridge/ChannelHintsProxy::max
	double ___max_3;
	// System.Int32 CsoundUnityBridge/ChannelHintsProxy::x
	int32_t ___x_4;
	// System.Int32 CsoundUnityBridge/ChannelHintsProxy::y
	int32_t ___y_5;
	// System.Int32 CsoundUnityBridge/ChannelHintsProxy::width
	int32_t ___width_6;
	// System.Int32 CsoundUnityBridge/ChannelHintsProxy::height
	int32_t ___height_7;
	// System.IntPtr CsoundUnityBridge/ChannelHintsProxy::attributes
	intptr_t ___attributes_8;

public:
	inline static int32_t get_offset_of_behav_0() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___behav_0)); }
	inline int32_t get_behav_0() const { return ___behav_0; }
	inline int32_t* get_address_of_behav_0() { return &___behav_0; }
	inline void set_behav_0(int32_t value)
	{
		___behav_0 = value;
	}

	inline static int32_t get_offset_of_dflt_1() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___dflt_1)); }
	inline double get_dflt_1() const { return ___dflt_1; }
	inline double* get_address_of_dflt_1() { return &___dflt_1; }
	inline void set_dflt_1(double value)
	{
		___dflt_1 = value;
	}

	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___min_2)); }
	inline double get_min_2() const { return ___min_2; }
	inline double* get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(double value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___max_3)); }
	inline double get_max_3() const { return ___max_3; }
	inline double* get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(double value)
	{
		___max_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___x_4)); }
	inline int32_t get_x_4() const { return ___x_4; }
	inline int32_t* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(int32_t value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___y_5)); }
	inline int32_t get_y_5() const { return ___y_5; }
	inline int32_t* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(int32_t value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___width_6)); }
	inline int32_t get_width_6() const { return ___width_6; }
	inline int32_t* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(int32_t value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___height_7)); }
	inline int32_t get_height_7() const { return ___height_7; }
	inline int32_t* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(int32_t value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B, ___attributes_8)); }
	inline intptr_t get_attributes_8() const { return ___attributes_8; }
	inline intptr_t* get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(intptr_t value)
	{
		___attributes_8 = value;
	}
};


// CsoundUnityBridge/ChannelType
struct ChannelType_tC49A0B7DD57DFF256252EF72ED0125B6A13FB9A0 
{
public:
	// System.Int32 CsoundUnityBridge/ChannelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChannelType_tC49A0B7DD57DFF256252EF72ED0125B6A13FB9A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CsoundUnityBridge/NamedGenProxy
struct NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF  : public RuntimeObject
{
public:
	// System.IntPtr CsoundUnityBridge/NamedGenProxy::name
	intptr_t ___name_0;
	// System.Int32 CsoundUnityBridge/NamedGenProxy::genum
	int32_t ___genum_1;
	// System.IntPtr CsoundUnityBridge/NamedGenProxy::next
	intptr_t ___next_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF, ___name_0)); }
	inline intptr_t get_name_0() const { return ___name_0; }
	inline intptr_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(intptr_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_genum_1() { return static_cast<int32_t>(offsetof(NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF, ___genum_1)); }
	inline int32_t get_genum_1() const { return ___genum_1; }
	inline int32_t* get_address_of_genum_1() { return &___genum_1; }
	inline void set_genum_1(int32_t value)
	{
		___genum_1 = value;
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF, ___next_2)); }
	inline intptr_t get_next_2() const { return ___next_2; }
	inline intptr_t* get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(intptr_t value)
	{
		___next_2 = value;
	}
};

// Native definition for P/Invoke marshalling of CsoundUnityBridge/NamedGenProxy
struct NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_pinvoke
{
	intptr_t ___name_0;
	int32_t ___genum_1;
	intptr_t ___next_2;
};
// Native definition for COM marshalling of CsoundUnityBridge/NamedGenProxy
struct NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_com
{
	intptr_t ___name_0;
	int32_t ___genum_1;
	intptr_t ___next_2;
};

// CsoundUnityBridge/OpcodeListProxy
struct OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224  : public RuntimeObject
{
public:
	// System.IntPtr CsoundUnityBridge/OpcodeListProxy::opname
	intptr_t ___opname_0;
	// System.IntPtr CsoundUnityBridge/OpcodeListProxy::outtypes
	intptr_t ___outtypes_1;
	// System.IntPtr CsoundUnityBridge/OpcodeListProxy::intypes
	intptr_t ___intypes_2;
	// System.Int32 CsoundUnityBridge/OpcodeListProxy::flags
	int32_t ___flags_3;

public:
	inline static int32_t get_offset_of_opname_0() { return static_cast<int32_t>(offsetof(OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224, ___opname_0)); }
	inline intptr_t get_opname_0() const { return ___opname_0; }
	inline intptr_t* get_address_of_opname_0() { return &___opname_0; }
	inline void set_opname_0(intptr_t value)
	{
		___opname_0 = value;
	}

	inline static int32_t get_offset_of_outtypes_1() { return static_cast<int32_t>(offsetof(OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224, ___outtypes_1)); }
	inline intptr_t get_outtypes_1() const { return ___outtypes_1; }
	inline intptr_t* get_address_of_outtypes_1() { return &___outtypes_1; }
	inline void set_outtypes_1(intptr_t value)
	{
		___outtypes_1 = value;
	}

	inline static int32_t get_offset_of_intypes_2() { return static_cast<int32_t>(offsetof(OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224, ___intypes_2)); }
	inline intptr_t get_intypes_2() const { return ___intypes_2; }
	inline intptr_t* get_address_of_intypes_2() { return &___intypes_2; }
	inline void set_intypes_2(intptr_t value)
	{
		___intypes_2 = value;
	}

	inline static int32_t get_offset_of_flags_3() { return static_cast<int32_t>(offsetof(OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224, ___flags_3)); }
	inline int32_t get_flags_3() const { return ___flags_3; }
	inline int32_t* get_address_of_flags_3() { return &___flags_3; }
	inline void set_flags_3(int32_t value)
	{
		___flags_3 = value;
	}
};

// Native definition for P/Invoke marshalling of CsoundUnityBridge/OpcodeListProxy
struct OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_pinvoke
{
	intptr_t ___opname_0;
	intptr_t ___outtypes_1;
	intptr_t ___intypes_2;
	int32_t ___flags_3;
};
// Native definition for COM marshalling of CsoundUnityBridge/OpcodeListProxy
struct OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_com
{
	intptr_t ___opname_0;
	intptr_t ___outtypes_1;
	intptr_t ___intypes_2;
	int32_t ___flags_3;
};

// CsoundUnityChild/AudioChannels
struct AudioChannels_tF678A27DED56A124599E884E949E7A952860A4FA 
{
public:
	// System.Int32 CsoundUnityChild/AudioChannels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioChannels_tF678A27DED56A124599E884E949E7A952860A4FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// CsoundUnity/<GetSamples>d__105
struct U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9  : public RuntimeObject
{
public:
	// System.Int32 CsoundUnity/<GetSamples>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CsoundUnity/<GetSamples>d__105::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CsoundUnity/SamplesOrigin CsoundUnity/<GetSamples>d__105::origin
	int32_t ___origin_2;
	// System.String CsoundUnity/<GetSamples>d__105::source
	String_t* ___source_3;
	// System.Action`1<System.Single[]> CsoundUnity/<GetSamples>d__105::onSamplesLoaded
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * ___onSamplesLoaded_4;
	// UnityEngine.ResourceRequest CsoundUnity/<GetSamples>d__105::<req>5__2
	ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___U3CreqU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9, ___origin_2)); }
	inline int32_t get_origin_2() const { return ___origin_2; }
	inline int32_t* get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(int32_t value)
	{
		___origin_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9, ___source_3)); }
	inline String_t* get_source_3() const { return ___source_3; }
	inline String_t** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(String_t* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_onSamplesLoaded_4() { return static_cast<int32_t>(offsetof(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9, ___onSamplesLoaded_4)); }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * get_onSamplesLoaded_4() const { return ___onSamplesLoaded_4; }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 ** get_address_of_onSamplesLoaded_4() { return &___onSamplesLoaded_4; }
	inline void set_onSamplesLoaded_4(Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * value)
	{
		___onSamplesLoaded_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSamplesLoaded_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreqU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9, ___U3CreqU3E5__2_5)); }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * get_U3CreqU3E5__2_5() const { return ___U3CreqU3E5__2_5; }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD ** get_address_of_U3CreqU3E5__2_5() { return &___U3CreqU3E5__2_5; }
	inline void set_U3CreqU3E5__2_5(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * value)
	{
		___U3CreqU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreqU3E5__2_5), (void*)value);
	}
};


// CsoundUnityBridge/ChannelHints
struct ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301  : public RuntimeObject
{
public:
	// CsoundUnityBridge/ChannelBehavior CsoundUnityBridge/ChannelHints::behav
	int32_t ___behav_0;
	// System.Double CsoundUnityBridge/ChannelHints::dflt
	double ___dflt_1;
	// System.Double CsoundUnityBridge/ChannelHints::min
	double ___min_2;
	// System.Double CsoundUnityBridge/ChannelHints::max
	double ___max_3;
	// System.Int32 CsoundUnityBridge/ChannelHints::x
	int32_t ___x_4;
	// System.Int32 CsoundUnityBridge/ChannelHints::y
	int32_t ___y_5;
	// System.Int32 CsoundUnityBridge/ChannelHints::width
	int32_t ___width_6;
	// System.Int32 CsoundUnityBridge/ChannelHints::height
	int32_t ___height_7;
	// System.String CsoundUnityBridge/ChannelHints::attributes
	String_t* ___attributes_8;

public:
	inline static int32_t get_offset_of_behav_0() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___behav_0)); }
	inline int32_t get_behav_0() const { return ___behav_0; }
	inline int32_t* get_address_of_behav_0() { return &___behav_0; }
	inline void set_behav_0(int32_t value)
	{
		___behav_0 = value;
	}

	inline static int32_t get_offset_of_dflt_1() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___dflt_1)); }
	inline double get_dflt_1() const { return ___dflt_1; }
	inline double* get_address_of_dflt_1() { return &___dflt_1; }
	inline void set_dflt_1(double value)
	{
		___dflt_1 = value;
	}

	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___min_2)); }
	inline double get_min_2() const { return ___min_2; }
	inline double* get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(double value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___max_3)); }
	inline double get_max_3() const { return ___max_3; }
	inline double* get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(double value)
	{
		___max_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___x_4)); }
	inline int32_t get_x_4() const { return ___x_4; }
	inline int32_t* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(int32_t value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___y_5)); }
	inline int32_t get_y_5() const { return ___y_5; }
	inline int32_t* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(int32_t value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___width_6)); }
	inline int32_t get_width_6() const { return ___width_6; }
	inline int32_t* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(int32_t value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___height_7)); }
	inline int32_t get_height_7() const { return ___height_7; }
	inline int32_t* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(int32_t value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301, ___attributes_8)); }
	inline String_t* get_attributes_8() const { return ___attributes_8; }
	inline String_t** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(String_t* value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_8), (void*)value);
	}
};


// CsoundUnityBridge/ChannelInfo
struct ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146  : public RuntimeObject
{
public:
	// System.String CsoundUnityBridge/ChannelInfo::Name
	String_t* ___Name_0;
	// CsoundUnityBridge/ChannelType CsoundUnityBridge/ChannelInfo::Type
	int32_t ___Type_1;
	// CsoundUnityBridge/ChannelDirection CsoundUnityBridge/ChannelInfo::Direction
	int32_t ___Direction_2;
	// CsoundUnityBridge/ChannelHints CsoundUnityBridge/ChannelInfo::Hints
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * ___Hints_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Direction_2() { return static_cast<int32_t>(offsetof(ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146, ___Direction_2)); }
	inline int32_t get_Direction_2() const { return ___Direction_2; }
	inline int32_t* get_address_of_Direction_2() { return &___Direction_2; }
	inline void set_Direction_2(int32_t value)
	{
		___Direction_2 = value;
	}

	inline static int32_t get_offset_of_Hints_3() { return static_cast<int32_t>(offsetof(ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146, ___Hints_3)); }
	inline ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * get_Hints_3() const { return ___Hints_3; }
	inline ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 ** get_address_of_Hints_3() { return &___Hints_3; }
	inline void set_Hints_3(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * value)
	{
		___Hints_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hints_3), (void*)value);
	}
};


// CsoundUnityBridge/ChannelInfoProxy
#pragma pack(push, tp, 1)
struct ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496  : public RuntimeObject
{
public:
	// System.IntPtr CsoundUnityBridge/ChannelInfoProxy::name
	intptr_t ___name_0;
	// System.Int32 CsoundUnityBridge/ChannelInfoProxy::type
	int32_t ___type_1;
	// CsoundUnityBridge/ChannelHintsProxy CsoundUnityBridge/ChannelInfoProxy::hints
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  ___hints_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496, ___name_0)); }
	inline intptr_t get_name_0() const { return ___name_0; }
	inline intptr_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(intptr_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_hints_2() { return static_cast<int32_t>(offsetof(ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496, ___hints_2)); }
	inline ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  get_hints_2() const { return ___hints_2; }
	inline ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B * get_address_of_hints_2() { return &___hints_2; }
	inline void set_hints_2(ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  value)
	{
		___hints_2 = value;
	}
};
#pragma pack(pop, tp)

// Native definition for P/Invoke marshalling of CsoundUnityBridge/ChannelInfoProxy
#pragma pack(push, tp, 1)
struct ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_pinvoke
{
	intptr_t ___name_0;
	int32_t ___type_1;
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  ___hints_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of CsoundUnityBridge/ChannelInfoProxy
#pragma pack(push, tp, 1)
struct ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_com
{
	intptr_t ___name_0;
	int32_t ___type_1;
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  ___hints_2;
};
#pragma pack(pop, tp)

// System.Action`1<System.Single[]>
struct Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// csoundcsharp.Csound6/FileOpenCallbackProxy
struct FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA  : public MulticastDelegate_t
{
public:

public:
};


// csoundcsharp.Csound6/MessageCallbackProxy
struct MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C  : public MulticastDelegate_t
{
public:

public:
};


// csoundcsharp.Csound6/RtcloseCallbackProxy
struct RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164  : public MulticastDelegate_t
{
public:

public:
};


// csoundcsharp.Csound6/SenseEventCallbackProxy
struct SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF  : public MulticastDelegate_t
{
public:

public:
};


// csoundcsharp.Csound6/YieldCallback
struct YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E  : public MulticastDelegate_t
{
public:

public:
};


// CsoundUnity/CsoundInitialized
struct CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2  : public MulticastDelegate_t
{
public:

public:
};


// CsoundUnityBridge/Csound6SenseEventCallbackHandler
struct Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CsoundUnity
struct CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CsoundUnity::logCsoundOutput
	bool ___logCsoundOutput_6;
	// System.Boolean CsoundUnity::mute
	bool ___mute_7;
	// System.Boolean CsoundUnity::processClipAudio
	bool ___processClipAudio_8;
	// System.Boolean CsoundUnity::loudVolumeWarning
	bool ___loudVolumeWarning_9;
	// System.Single CsoundUnity::loudWarningThreshold
	float ___loudWarningThreshold_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single[]> CsoundUnity::namedAudioChannelDataDict
	Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * ___namedAudioChannelDataDict_11;
	// CsoundUnity/CsoundInitialized CsoundUnity::OnCsoundInitialized
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * ___OnCsoundInitialized_12;
	// System.String CsoundUnity::csoundScore
	String_t* ___csoundScore_13;
	// CsoundUnityBridge CsoundUnity::csound
	CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * ___csound_14;
	// System.String CsoundUnity::_csoundFileGUID
	String_t* ____csoundFileGUID_15;
	// System.String CsoundUnity::_csoundString
	String_t* ____csoundString_16;
	// System.String CsoundUnity::_csoundFileName
	String_t* ____csoundFileName_17;
	// System.Collections.Generic.List`1<CsoundChannelController> CsoundUnity::_channels
	List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * ____channels_18;
	// System.Collections.Generic.List`1<System.String> CsoundUnity::_availableAudioChannels
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____availableAudioChannels_19;
	// System.Boolean CsoundUnity::_drawCsoundString
	bool ____drawCsoundString_20;
	// System.Boolean CsoundUnity::_drawTestScore
	bool ____drawTestScore_21;
	// System.Boolean CsoundUnity::_drawSettings
	bool ____drawSettings_22;
	// System.Boolean CsoundUnity::_drawChannels
	bool ____drawChannels_23;
	// System.Boolean CsoundUnity::_drawAudioChannels
	bool ____drawAudioChannels_24;
	// System.Boolean CsoundUnity::initialized
	bool ___initialized_25;
	// System.UInt32 CsoundUnity::ksmps
	uint32_t ___ksmps_26;
	// System.UInt32 CsoundUnity::ksmpsIndex
	uint32_t ___ksmpsIndex_27;
	// System.Single CsoundUnity::zerdbfs
	float ___zerdbfs_28;
	// System.Boolean CsoundUnity::compiledOk
	bool ___compiledOk_29;
	// System.Boolean CsoundUnity::performanceFinished
	bool ___performanceFinished_30;
	// UnityEngine.AudioSource CsoundUnity::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_31;
	// UnityEngine.Coroutine CsoundUnity::LoggingCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___LoggingCoroutine_32;
	// System.Int32 CsoundUnity::bufferSize
	int32_t ___bufferSize_33;
	// System.Int32 CsoundUnity::numBuffers
	int32_t ___numBuffers_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single[]> CsoundUnity::namedAudioChannelTempBufferDict
	Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * ___namedAudioChannelTempBufferDict_35;
	// System.Boolean CsoundUnity::_quitting
	bool ____quitting_36;

public:
	inline static int32_t get_offset_of_logCsoundOutput_6() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___logCsoundOutput_6)); }
	inline bool get_logCsoundOutput_6() const { return ___logCsoundOutput_6; }
	inline bool* get_address_of_logCsoundOutput_6() { return &___logCsoundOutput_6; }
	inline void set_logCsoundOutput_6(bool value)
	{
		___logCsoundOutput_6 = value;
	}

	inline static int32_t get_offset_of_mute_7() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___mute_7)); }
	inline bool get_mute_7() const { return ___mute_7; }
	inline bool* get_address_of_mute_7() { return &___mute_7; }
	inline void set_mute_7(bool value)
	{
		___mute_7 = value;
	}

	inline static int32_t get_offset_of_processClipAudio_8() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___processClipAudio_8)); }
	inline bool get_processClipAudio_8() const { return ___processClipAudio_8; }
	inline bool* get_address_of_processClipAudio_8() { return &___processClipAudio_8; }
	inline void set_processClipAudio_8(bool value)
	{
		___processClipAudio_8 = value;
	}

	inline static int32_t get_offset_of_loudVolumeWarning_9() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___loudVolumeWarning_9)); }
	inline bool get_loudVolumeWarning_9() const { return ___loudVolumeWarning_9; }
	inline bool* get_address_of_loudVolumeWarning_9() { return &___loudVolumeWarning_9; }
	inline void set_loudVolumeWarning_9(bool value)
	{
		___loudVolumeWarning_9 = value;
	}

	inline static int32_t get_offset_of_loudWarningThreshold_10() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___loudWarningThreshold_10)); }
	inline float get_loudWarningThreshold_10() const { return ___loudWarningThreshold_10; }
	inline float* get_address_of_loudWarningThreshold_10() { return &___loudWarningThreshold_10; }
	inline void set_loudWarningThreshold_10(float value)
	{
		___loudWarningThreshold_10 = value;
	}

	inline static int32_t get_offset_of_namedAudioChannelDataDict_11() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___namedAudioChannelDataDict_11)); }
	inline Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * get_namedAudioChannelDataDict_11() const { return ___namedAudioChannelDataDict_11; }
	inline Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 ** get_address_of_namedAudioChannelDataDict_11() { return &___namedAudioChannelDataDict_11; }
	inline void set_namedAudioChannelDataDict_11(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * value)
	{
		___namedAudioChannelDataDict_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedAudioChannelDataDict_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnCsoundInitialized_12() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___OnCsoundInitialized_12)); }
	inline CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * get_OnCsoundInitialized_12() const { return ___OnCsoundInitialized_12; }
	inline CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 ** get_address_of_OnCsoundInitialized_12() { return &___OnCsoundInitialized_12; }
	inline void set_OnCsoundInitialized_12(CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * value)
	{
		___OnCsoundInitialized_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCsoundInitialized_12), (void*)value);
	}

	inline static int32_t get_offset_of_csoundScore_13() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___csoundScore_13)); }
	inline String_t* get_csoundScore_13() const { return ___csoundScore_13; }
	inline String_t** get_address_of_csoundScore_13() { return &___csoundScore_13; }
	inline void set_csoundScore_13(String_t* value)
	{
		___csoundScore_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csoundScore_13), (void*)value);
	}

	inline static int32_t get_offset_of_csound_14() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___csound_14)); }
	inline CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * get_csound_14() const { return ___csound_14; }
	inline CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 ** get_address_of_csound_14() { return &___csound_14; }
	inline void set_csound_14(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * value)
	{
		___csound_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csound_14), (void*)value);
	}

	inline static int32_t get_offset_of__csoundFileGUID_15() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____csoundFileGUID_15)); }
	inline String_t* get__csoundFileGUID_15() const { return ____csoundFileGUID_15; }
	inline String_t** get_address_of__csoundFileGUID_15() { return &____csoundFileGUID_15; }
	inline void set__csoundFileGUID_15(String_t* value)
	{
		____csoundFileGUID_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____csoundFileGUID_15), (void*)value);
	}

	inline static int32_t get_offset_of__csoundString_16() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____csoundString_16)); }
	inline String_t* get__csoundString_16() const { return ____csoundString_16; }
	inline String_t** get_address_of__csoundString_16() { return &____csoundString_16; }
	inline void set__csoundString_16(String_t* value)
	{
		____csoundString_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____csoundString_16), (void*)value);
	}

	inline static int32_t get_offset_of__csoundFileName_17() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____csoundFileName_17)); }
	inline String_t* get__csoundFileName_17() const { return ____csoundFileName_17; }
	inline String_t** get_address_of__csoundFileName_17() { return &____csoundFileName_17; }
	inline void set__csoundFileName_17(String_t* value)
	{
		____csoundFileName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____csoundFileName_17), (void*)value);
	}

	inline static int32_t get_offset_of__channels_18() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____channels_18)); }
	inline List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * get__channels_18() const { return ____channels_18; }
	inline List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E ** get_address_of__channels_18() { return &____channels_18; }
	inline void set__channels_18(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * value)
	{
		____channels_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____channels_18), (void*)value);
	}

	inline static int32_t get_offset_of__availableAudioChannels_19() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____availableAudioChannels_19)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__availableAudioChannels_19() const { return ____availableAudioChannels_19; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__availableAudioChannels_19() { return &____availableAudioChannels_19; }
	inline void set__availableAudioChannels_19(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____availableAudioChannels_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____availableAudioChannels_19), (void*)value);
	}

	inline static int32_t get_offset_of__drawCsoundString_20() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____drawCsoundString_20)); }
	inline bool get__drawCsoundString_20() const { return ____drawCsoundString_20; }
	inline bool* get_address_of__drawCsoundString_20() { return &____drawCsoundString_20; }
	inline void set__drawCsoundString_20(bool value)
	{
		____drawCsoundString_20 = value;
	}

	inline static int32_t get_offset_of__drawTestScore_21() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____drawTestScore_21)); }
	inline bool get__drawTestScore_21() const { return ____drawTestScore_21; }
	inline bool* get_address_of__drawTestScore_21() { return &____drawTestScore_21; }
	inline void set__drawTestScore_21(bool value)
	{
		____drawTestScore_21 = value;
	}

	inline static int32_t get_offset_of__drawSettings_22() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____drawSettings_22)); }
	inline bool get__drawSettings_22() const { return ____drawSettings_22; }
	inline bool* get_address_of__drawSettings_22() { return &____drawSettings_22; }
	inline void set__drawSettings_22(bool value)
	{
		____drawSettings_22 = value;
	}

	inline static int32_t get_offset_of__drawChannels_23() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____drawChannels_23)); }
	inline bool get__drawChannels_23() const { return ____drawChannels_23; }
	inline bool* get_address_of__drawChannels_23() { return &____drawChannels_23; }
	inline void set__drawChannels_23(bool value)
	{
		____drawChannels_23 = value;
	}

	inline static int32_t get_offset_of__drawAudioChannels_24() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____drawAudioChannels_24)); }
	inline bool get__drawAudioChannels_24() const { return ____drawAudioChannels_24; }
	inline bool* get_address_of__drawAudioChannels_24() { return &____drawAudioChannels_24; }
	inline void set__drawAudioChannels_24(bool value)
	{
		____drawAudioChannels_24 = value;
	}

	inline static int32_t get_offset_of_initialized_25() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___initialized_25)); }
	inline bool get_initialized_25() const { return ___initialized_25; }
	inline bool* get_address_of_initialized_25() { return &___initialized_25; }
	inline void set_initialized_25(bool value)
	{
		___initialized_25 = value;
	}

	inline static int32_t get_offset_of_ksmps_26() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___ksmps_26)); }
	inline uint32_t get_ksmps_26() const { return ___ksmps_26; }
	inline uint32_t* get_address_of_ksmps_26() { return &___ksmps_26; }
	inline void set_ksmps_26(uint32_t value)
	{
		___ksmps_26 = value;
	}

	inline static int32_t get_offset_of_ksmpsIndex_27() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___ksmpsIndex_27)); }
	inline uint32_t get_ksmpsIndex_27() const { return ___ksmpsIndex_27; }
	inline uint32_t* get_address_of_ksmpsIndex_27() { return &___ksmpsIndex_27; }
	inline void set_ksmpsIndex_27(uint32_t value)
	{
		___ksmpsIndex_27 = value;
	}

	inline static int32_t get_offset_of_zerdbfs_28() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___zerdbfs_28)); }
	inline float get_zerdbfs_28() const { return ___zerdbfs_28; }
	inline float* get_address_of_zerdbfs_28() { return &___zerdbfs_28; }
	inline void set_zerdbfs_28(float value)
	{
		___zerdbfs_28 = value;
	}

	inline static int32_t get_offset_of_compiledOk_29() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___compiledOk_29)); }
	inline bool get_compiledOk_29() const { return ___compiledOk_29; }
	inline bool* get_address_of_compiledOk_29() { return &___compiledOk_29; }
	inline void set_compiledOk_29(bool value)
	{
		___compiledOk_29 = value;
	}

	inline static int32_t get_offset_of_performanceFinished_30() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___performanceFinished_30)); }
	inline bool get_performanceFinished_30() const { return ___performanceFinished_30; }
	inline bool* get_address_of_performanceFinished_30() { return &___performanceFinished_30; }
	inline void set_performanceFinished_30(bool value)
	{
		___performanceFinished_30 = value;
	}

	inline static int32_t get_offset_of_audioSource_31() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___audioSource_31)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_31() const { return ___audioSource_31; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_31() { return &___audioSource_31; }
	inline void set_audioSource_31(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_31), (void*)value);
	}

	inline static int32_t get_offset_of_LoggingCoroutine_32() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___LoggingCoroutine_32)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_LoggingCoroutine_32() const { return ___LoggingCoroutine_32; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_LoggingCoroutine_32() { return &___LoggingCoroutine_32; }
	inline void set_LoggingCoroutine_32(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___LoggingCoroutine_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoggingCoroutine_32), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_33() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___bufferSize_33)); }
	inline int32_t get_bufferSize_33() const { return ___bufferSize_33; }
	inline int32_t* get_address_of_bufferSize_33() { return &___bufferSize_33; }
	inline void set_bufferSize_33(int32_t value)
	{
		___bufferSize_33 = value;
	}

	inline static int32_t get_offset_of_numBuffers_34() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___numBuffers_34)); }
	inline int32_t get_numBuffers_34() const { return ___numBuffers_34; }
	inline int32_t* get_address_of_numBuffers_34() { return &___numBuffers_34; }
	inline void set_numBuffers_34(int32_t value)
	{
		___numBuffers_34 = value;
	}

	inline static int32_t get_offset_of_namedAudioChannelTempBufferDict_35() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ___namedAudioChannelTempBufferDict_35)); }
	inline Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * get_namedAudioChannelTempBufferDict_35() const { return ___namedAudioChannelTempBufferDict_35; }
	inline Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 ** get_address_of_namedAudioChannelTempBufferDict_35() { return &___namedAudioChannelTempBufferDict_35; }
	inline void set_namedAudioChannelTempBufferDict_35(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * value)
	{
		___namedAudioChannelTempBufferDict_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedAudioChannelTempBufferDict_35), (void*)value);
	}

	inline static int32_t get_offset_of__quitting_36() { return static_cast<int32_t>(offsetof(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514, ____quitting_36)); }
	inline bool get__quitting_36() const { return ____quitting_36; }
	inline bool* get_address_of__quitting_36() { return &____quitting_36; }
	inline void set__quitting_36(bool value)
	{
		____quitting_36 = value;
	}
};


// CsoundUnityChild
struct CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CsoundUnityChild::csoundUnityGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___csoundUnityGameObject_4;
	// CsoundUnityChild/AudioChannels CsoundUnityChild::AudioChannelsSetting
	int32_t ___AudioChannelsSetting_5;
	// System.Int32[] CsoundUnityChild::selectedAudioChannelIndexByChannel
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___selectedAudioChannelIndexByChannel_6;
	// System.Collections.Generic.List`1<System.String> CsoundUnityChild::availableAudioChannels
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___availableAudioChannels_7;
	// System.Collections.Generic.List`1<System.Single[]> CsoundUnityChild::namedAudioChannelData
	List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___namedAudioChannelData_8;
	// System.Int32 CsoundUnityChild::bufferSize
	int32_t ___bufferSize_9;
	// System.Int32 CsoundUnityChild::numBuffers
	int32_t ___numBuffers_10;
	// System.Single CsoundUnityChild::zerodbfs
	float ___zerodbfs_11;
	// UnityEngine.AudioSource CsoundUnityChild::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_12;
	// CsoundUnity CsoundUnityChild::csoundUnity
	CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * ___csoundUnity_13;

public:
	inline static int32_t get_offset_of_csoundUnityGameObject_4() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___csoundUnityGameObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_csoundUnityGameObject_4() const { return ___csoundUnityGameObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_csoundUnityGameObject_4() { return &___csoundUnityGameObject_4; }
	inline void set_csoundUnityGameObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___csoundUnityGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csoundUnityGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_AudioChannelsSetting_5() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___AudioChannelsSetting_5)); }
	inline int32_t get_AudioChannelsSetting_5() const { return ___AudioChannelsSetting_5; }
	inline int32_t* get_address_of_AudioChannelsSetting_5() { return &___AudioChannelsSetting_5; }
	inline void set_AudioChannelsSetting_5(int32_t value)
	{
		___AudioChannelsSetting_5 = value;
	}

	inline static int32_t get_offset_of_selectedAudioChannelIndexByChannel_6() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___selectedAudioChannelIndexByChannel_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_selectedAudioChannelIndexByChannel_6() const { return ___selectedAudioChannelIndexByChannel_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_selectedAudioChannelIndexByChannel_6() { return &___selectedAudioChannelIndexByChannel_6; }
	inline void set_selectedAudioChannelIndexByChannel_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___selectedAudioChannelIndexByChannel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedAudioChannelIndexByChannel_6), (void*)value);
	}

	inline static int32_t get_offset_of_availableAudioChannels_7() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___availableAudioChannels_7)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_availableAudioChannels_7() const { return ___availableAudioChannels_7; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_availableAudioChannels_7() { return &___availableAudioChannels_7; }
	inline void set_availableAudioChannels_7(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___availableAudioChannels_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableAudioChannels_7), (void*)value);
	}

	inline static int32_t get_offset_of_namedAudioChannelData_8() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___namedAudioChannelData_8)); }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * get_namedAudioChannelData_8() const { return ___namedAudioChannelData_8; }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 ** get_address_of_namedAudioChannelData_8() { return &___namedAudioChannelData_8; }
	inline void set_namedAudioChannelData_8(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * value)
	{
		___namedAudioChannelData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedAudioChannelData_8), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_9() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___bufferSize_9)); }
	inline int32_t get_bufferSize_9() const { return ___bufferSize_9; }
	inline int32_t* get_address_of_bufferSize_9() { return &___bufferSize_9; }
	inline void set_bufferSize_9(int32_t value)
	{
		___bufferSize_9 = value;
	}

	inline static int32_t get_offset_of_numBuffers_10() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___numBuffers_10)); }
	inline int32_t get_numBuffers_10() const { return ___numBuffers_10; }
	inline int32_t* get_address_of_numBuffers_10() { return &___numBuffers_10; }
	inline void set_numBuffers_10(int32_t value)
	{
		___numBuffers_10 = value;
	}

	inline static int32_t get_offset_of_zerodbfs_11() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___zerodbfs_11)); }
	inline float get_zerodbfs_11() const { return ___zerodbfs_11; }
	inline float* get_address_of_zerodbfs_11() { return &___zerodbfs_11; }
	inline void set_zerodbfs_11(float value)
	{
		___zerodbfs_11 = value;
	}

	inline static int32_t get_offset_of_audioSource_12() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___audioSource_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_12() const { return ___audioSource_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_12() { return &___audioSource_12; }
	inline void set_audioSource_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_12), (void*)value);
	}

	inline static int32_t get_offset_of_csoundUnity_13() { return static_cast<int32_t>(offsetof(CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D, ___csoundUnity_13)); }
	inline CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * get_csoundUnity_13() const { return ___csoundUnity_13; }
	inline CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 ** get_address_of_csoundUnity_13() { return &___csoundUnity_13; }
	inline void set_csoundUnity_13(CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * value)
	{
		___csoundUnity_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csoundUnity_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke(const CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F& unmarshaled, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_back(const CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke& marshaled, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F& unmarshaled);
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_cleanup(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke& marshaled);

// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Char>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.GCHandle>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDFA5A98CE710C3A9D859FB123986E8587B9C8E6F_gshared (Dictionary_2_t247FD3994F43C0EE2599722B8C4855CC713A9EA5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mF1EB8DF237AE36C66AB3056298D859C139A7F017_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_mC524CC8715D027FB364746134319A31068BBEE03_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_m3C6A2E81722B70709D757CF1ADD59966F2885952_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SortedDictionary_2_get_Item_m82C0F629628A63DFB2814BEB43FFA6BEE2889A47_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// UnityEngine.ResourceRequest UnityEngine.Resources::LoadAsync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * Resources_LoadAsync_TisRuntimeObject_mE0B403E9B9FA84ACD847A95576E332CA18785DBD_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052 (int32_t* ___bufferLength0, int32_t* ___numBuffers1, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m7A2F79646794E197E588558EE81971A0C32A2A6A (String_t* ___path10, String_t* ___path21, String_t* ___path32, const RuntimeMethod* method);
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963 (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CsoundUnityBridge::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge__ctor_m92C6FC26989C5906E48BF49980EFD8D7D6AFD850 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___csoundDir0, String_t* ___csdFile1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<CsoundChannelController> CsoundUnity::get_channels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936_inline (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<CsoundChannelController>::get_Item(System.Int32)
inline CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_inline (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * (*) (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void CsoundUnityBridge::SetChannel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetChannel_m4F75122437E23A56EB83421D98343AD48BA7AB11 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___channel0, float ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<CsoundChannelController>::get_Count()
inline int32_t List_1_get_Count_m77E8F4856F3368ED3384C38E426ACD2291BAADA8_inline (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<System.String> CsoundUnity::get_availableAudioChannels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * CsoundUnity_get_availableAudioChannels_m1286F5171116CA5F72E6F08BF7712E8C5C592B8A_inline (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single[]>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03 (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single[]>::Add(!0,!1)
inline void Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * __this, String_t* ___key0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.IEnumerator CsoundUnity::Logging(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnity_Logging_m24AFC2F9275183BAAEAF901BC5C1270DAC253B48 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, float ___interval0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean CsoundUnityBridge::CompiledWithoutError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CsoundUnityBridge_CompiledWithoutError_mBDC47E361F054835CF04FD5638FA75D3E8E87124_inline (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Single CsoundUnityBridge::Get0dbfs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_Get0dbfs_m5CBA5CE962CC46A86A88CD0B35BF2C7E5DA773A3 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void CsoundUnity/CsoundInitialized::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundInitialized_Invoke_mE03151B6AFDEC8D673ABEB877FD44F02F653316C (CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetVersion_mCA0A43310E74C944C2B3BA36A4160C782C082B3B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::GetAPIVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetAPIVersion_mF9B12160D9BBE707AAED7C6C04E49AA67D01537E (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::CompileOrc(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_CompileOrc_mB14FFC8E627E9BD359473B92746687933F0AAC89 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___orchStr0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::SendScoreEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SendScoreEvent_m5D13110D6A8DBF9E0F9E4EBAA21D4EFD7E19B3DF (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___scoreEvent0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::RewindScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_RewindScore_m466FAB401153CCAB90430585074CF6D3D2865EAA (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::CsoundSetScoreOffsetSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_CsoundSetScoreOffsetSeconds_m8D060AD776D4D42BE9D77F5570E2D8320CC742ED (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, float ___value0, const RuntimeMethod* method);
// System.Single CsoundUnityBridge::GetSr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetSr_m93F12085684EA62D2355A281E7430A309E82E046 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Single CsoundUnityBridge::GetKr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetKr_m0981FCD2B8EE25391A88B0FB54A6A33C6F9E81BC (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::PerformKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_PerformKsmps_m3492EF5A53A00761CAF9DF2511119CFFA6FEE23E (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.UInt32 CsoundUnityBridge::GetKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnityBridge_GetKsmps_m2DFC2E523372FF7EFF5CD5400B9316A75DE5890A (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.String[] System.IO.File::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* File_ReadAllLines_m705F4709C4562B0E24E95613867A32232DB42633 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] System.Array::Empty<System.Char>()
inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* (*) (const RuntimeMethod*))Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_gshared_inline)(method);
}
// System.String System.String::TrimStart(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<CsoundChannelController>::.ctor()
inline void List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1 (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void CsoundChannelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundChannelController__ctor_mC46635122F6083841B84F503BDF9373E701B6519 (CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void CsoundChannelController::SetRange(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundChannelController_SetRange_m5A5B3F55784A1B37BC140171F30CD556C31855C1 (CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * __this, float ___uMin0, float ___uMax1, float ___uValue2, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD (String_t* __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CsoundChannelController>::Add(!0)
inline void List_1_Add_mE54AF0F12D36E6C373EAE66E716139EEFA6C724E (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * __this, CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *, CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void CsoundUnityBridge::SetSpinSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetSpinSample_m8922B400A3F879CB9EA2B5109BFB8F680E67F16F (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::AddSpinSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_AddSpinSample_m0B4F8D97B7EA669F886226BBB0C9A29D0F9D3B4E (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::ClearSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_ClearSpin_m5F4CA0961378F36A483248BF58E865DA225AAC6A (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Single CsoundUnityBridge::GetSpoutSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetSpoutSample_m7E113844AE40BDE0E3931151EF18B496CF1ED7D3 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___frame0, int32_t ___channel1, const RuntimeMethod* method);
// System.Single[] CsoundUnityBridge::GetSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnityBridge_GetSpin_m926C331DC5C28059CEC156D0274FABB00C2975E3 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Single[] CsoundUnityBridge::GetSpout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnityBridge_GetSpout_mAAF5918B8A113358DB977DEFCCA9F62A08EDD62B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::SetStringChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetStringChannel_m8ED2E5813389EEE773E5CDFB808E132A793F4193 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___channel0, String_t* ___value1, const RuntimeMethod* method);
// System.Single CsoundUnityBridge::GetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetChannel_m65B6693EC6DAAC3389FE3598DCB45DC2CEF15CBD (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___channel0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,CsoundUnityBridge/ChannelInfo> CsoundUnityBridge::GetChannelList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnityBridge_GetChannelList_m5F9926452C4481F8D88DCF2BF51E6FFD8FAF2AC6 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Single[] CsoundUnityBridge::GetAudioChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnityBridge_GetAudioChannel_m3B9FAC9B46521AC81C43985F4F104B63395B244D (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 CsoundUnity::CreateTableInstrument(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_CreateTableInstrument_m63BB69A8DCCE6D557F9CBF6BB47592AD1DA7D501 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___tableNumber0, int32_t ___tableLength1, const RuntimeMethod* method);
// System.Void CsoundUnity::CopyTableIn(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_CopyTableIn_mCF53B0609636A3C4D455F99212FDBB364EE283E5 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Int32 CsoundUnity::CompileOrc(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_CompileOrc_mE0E0AF5F1E97AC4F026E61CAA8F0527E645047C5 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___orcStr0, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::TableLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_TableLength_m272AFB3934E6ED3A514B84F3B352EA15A80B3956 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, const RuntimeMethod* method);
// System.Single CsoundUnityBridge::GetTable(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetTable_mA8B42333D5C513C9D4FEB880D0F3D5CBA6B24C9C (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::GetTable(System.Single[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetTable_m7633927992F2D6002FC00E796D6AFF4032B1BAF9 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___tableValues0, int32_t ___numTable1, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::GetTableArgs(System.Single[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetTableArgs_m1D890BCC2666FF41DF089386EA2C57117A5878BD (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___args0, int32_t ___index1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::SetTable(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetTable_m4C011FCAB23A6422A9D392624B5EF1C57A884F5B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, int32_t ___index1, float ___value2, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::TableCopyOut(System.Int32,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyOut_m433B80E465FE6F2ABDA88D6048B94692A7520AA5 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___dest1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::TableCopyOutAsync(System.Int32,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyOutAsync_mF43355AF8E7449D393EA170872D5C7AE71D0E526 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___dest1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::TableCopyIn(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyIn_m01FB76CB094DC5EAE5C511AF38CF0C4257D9BB50 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::TableCopyInAsync(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyInAsync_m46803198B17EE72339015DDAB341A9F61FEF43F4 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::IsNamedGEN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_IsNamedGEN_m5E2C5CB5A2207AD101A17C169AA1DABBC45E3E40 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::GetNamedGEN(System.Int32,System.String&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_GetNamedGEN_mFC381115988F0967E6BCD65DC1115EF356F298C0 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___num0, String_t** ___name1, int32_t ___len2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Int32> CsoundUnityBridge::GetNamedGens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnityBridge_GetNamedGens_m34E5A734C776A253E9137E29275F5D4FB81F14B5 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::SetYieldCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetYieldCallback_mF7D909D14B0AA7F56BFA6ADAAE431257F6740274 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::add_SenseEventsCallback(CsoundUnityBridge/Csound6SenseEventCallbackHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_add_SenseEventsCallback_mD02DBC21905802C0C206416375B17F9C30D82CCC (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * ___value0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::remove_SenseEventsCallback(CsoundUnityBridge/Csound6SenseEventCallbackHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_remove_SenseEventsCallback_mD4556E02DDB9C0DC6C6162D6121C9E7127BBD791 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * ___value0, const RuntimeMethod* method);
// CsoundUnityBridge/CSOUND_PARAMS CsoundUnityBridge::GetParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * CsoundUnityBridge_GetParams_m23B88E12DAF608C79FF561D20E4E2412FFC7380C (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::SetParams(CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetParams_mC2555EED792F9955688E235CEA44F0B20E7DBB6C (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms0, const RuntimeMethod* method);
// System.String CsoundUnityBridge::GetEnv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_GetEnv_mCD2EF1C8569DAEA53AFC262C990577E2C1A18D78 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>> CsoundUnityBridge::GetOpcodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnityBridge_GetOpcodeList_m540C2EE347ABBC26B2A87AEDB6EFF4D0C9CCAE49 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.UInt32 CsoundUnityBridge::GetNchnlsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnityBridge_GetNchnlsInput_m31373B81A44B17984B85B6CADF393AD4DCDF65CA (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.UInt32 CsoundUnityBridge::GetNchnls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnityBridge_GetNchnls_mE5D19B9E98B77A6BD8BDC646E5B851FAE82A8CF4 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Int64 CsoundUnityBridge::GetCurrentTimeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CsoundUnityBridge_GetCurrentTimeSamples_m03C3E545CDF88F36E862B7871512B41FC8039B59 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single[] CsoundUnity::GetSamples(System.String,CsoundUnity/SamplesOrigin,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetSamples_m649FB644A0234998068ABCA633288CF0D27EF9B3 (String_t* ___source0, int32_t ___origin1, int32_t ___channelNumber2, bool ___writeChannelData3, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void CsoundUnity/<GetSamples>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSamplesU3Ed__105__ctor_m2C3EC6F184D71C30A17139C81FF278736B5EABAE (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Create_m2C278C920C8B40322EB632EC620A83B021C90725 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void CsoundUnity::ProcessBlock(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.UInt32 CsoundUnity::GetKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnity_GetKsmps_m243C7D7A2136CABF157C176C9BEFC85465B84779 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method);
// System.Int32 CsoundUnity::PerformKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_PerformKsmps_m9A937E2C38A495339AD2B9DB2405EC771F7CA585 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method);
// System.Single[] CsoundUnity::GetAudioChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetAudioChannel_m50D24F0B096AACBDC93F65AC846E54D681FE0D08 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___channel0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m00F3C1D6871DFCE5FE0EDC436E023F4CA3D9EB91 (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * __this, String_t* ___key0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void CsoundUnity::SetInputSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetInputSample_m53D096C6AF162D3F2815A15CAFE2CED4C000D1B9 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method);
// System.UInt32 CsoundUnity::GetNchnls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnity_GetNchnls_m401F56A7DDBE45F66054F05E79B132E214B63B2C (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method);
// System.Single CsoundUnity::GetOutputSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_GetOutputSample_mCB2186ECD4F3EE65A9CAD1954EFFEB8402F43083 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___frame0, int32_t ___channel1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Single[]>::get_Item(!0)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String CsoundUnityBridge::GetCsoundMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_GetCsoundMessage_mAC6EC0F174655CAF466A026393A0CD9BB40A9EF6 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 CsoundUnityBridge::GetCsoundMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetCsoundMessageCount_mD0A28B7666E2B1424EEB49FA800BD518D0C7040B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void CsoundUnity/<Logging>d__113::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoggingU3Ed__113__ctor_m9E816D075B0888A8A22867130D4616BF4A76C88A (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_Reset_m42A5667F636C90427180C28C343869761649F3A9 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_Cleanup_mD2EDF853B9754312E7DB287AF3A7CE284D9A8725 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CsoundChannelController>::Clear()
inline void List_1_Clear_mBE4C636F807969CDF5361F3BD7AC6A01DA9D3126 (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single[]>::Clear()
inline void Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void CsoundUnityBridge::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_OnApplicationQuit_m76139059F640B31D0F9BE4A3D11D78ECD0D40666 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single[]>::.ctor()
inline void Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Runtime.InteropServices.GCHandle>::.ctor()
inline void Dictionary_2__ctor_m12C50E3E0C77225A40D2D8376CD7DDD3302DBDCF (Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382 *, const RuntimeMethod*))Dictionary_2__ctor_mDFA5A98CE710C3A9D859FB123986E8587B9C8E6F_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundSetGlobalEnv(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundSetGlobalEnv_mBA95F285391C45F22D17C2039C4412B90FFB6382 (String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundInitialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundInitialize_m4F12DA417DA8C1BE298914F64317A488796DF2E7 (int32_t ___flags0, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundCreate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundCreate_mC39E1767B19641012047AA494CC8CA0F60EC16F1 (intptr_t ___hostdata0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetHostImplementedAudioIO(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetHostImplementedAudioIO_m3ADA09AF42CCBA1AFDD04F3D386793D50CF5919A (intptr_t ___csound0, int32_t ___state1, int32_t ___buffSize2, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundCreateMessageBuffer(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundCreateMessageBuffer_m20F2934E23F4C7A15D9EBC75D0EC89555941683B (intptr_t ___csound0, int32_t ___toStdOut1, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundSetOption(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundSetOption_m963BFB8101356BBA6FE742A572613DF08DA10711 (intptr_t ___csound0, String_t* ___option1, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileCsdText(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileCsdText_m56601626080B0E1AACB7B4A461C5077A977DDBCF (intptr_t ___csound0, String_t* ___csdText1, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundStart(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundStart_mFD990E0EA5A155DD64428FF9887059B0B3732E8D (intptr_t ___csound0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetVersion_m1916CE467377B9E1346D896B016F80EF4D1DB00A (const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetAPIVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetAPIVersion_m0E3F34FE8C857A1E9A46DFAAD34E30C7F2664702 (const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundStop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundStop_mBE598A65247D460CCB2EFBF508F7EF30ED06D7FD (intptr_t ___csound0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDestroyMessageBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDestroyMessageBuffer_m6262AAEB434CF4DA03973C8C0268B35CF7E8130D (intptr_t ___csound0, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDestroy_m50262DB0006AD56FA69022C7AE3B375F8008AEF0 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCleanup_m7B2A8579A537A304C35B13F9E2CA91FD94EAA9E7 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundReset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundReset_m783E7A47C983674F928C716F302322A72B8CABCC (intptr_t ___csound0, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileOrc(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileOrc_m2AD5762832317C1A62C250353840364B57BF6F29 (intptr_t ___csound0, String_t* ___orchStr1, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundPerformKsmps(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundPerformKsmps_mCDAEB929EAD015D5C5307EC4210A2D62F9E7FDA4 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGet0dBFS(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGet0dBFS_m5D763849777A77C54DBA0CD3E3687286400F0F41 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Int64 csoundcsharp.Csound6/NativeMethods::csoundGetCurrentTimeSamples(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_csoundGetCurrentTimeSamples_m56D4E3888AEBC55BF3AD4A69DAEC5CC23E204F12 (intptr_t ___csound0, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundInputMessage(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundInputMessage_m9C264BD04D8258C2BD60DFFF4ECA4B02F4AF74E5 (intptr_t ___csound0, String_t* ___str1, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundRewindScore(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundRewindScore_m11D7FF96A568093B8942828C76617B3F62717391 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetScoreOffsetSeconds(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetScoreOffsetSeconds_m9AA1ECDEE183A0303533517E38D08B0B00A935B7 (intptr_t ___csound0, float ___time1, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundSetControlChannel(System.IntPtr,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundSetControlChannel_m6E7F2206EB8C37FCB2C91B13D7EDDB057BFD0A7C (intptr_t ___csound0, String_t* ___str1, float ___value2, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundSetStringChannel(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundSetStringChannel_m72944FBBCC87A502BC07DB3A8FDC18DC3C613759 (intptr_t ___csound0, String_t* ___str1, String_t* ___value2, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Single[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m2D013820DD53B2B978A9759C619F1BB29850575F (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetAudioChannel(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetAudioChannel_m21AA27A48BB104C3926B2E890D57DE747ABDE001 (intptr_t ___csound0, String_t* ___name1, intptr_t ___samples2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundGetAudioChannel(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundGetAudioChannel_m7209003BC0E24A6BF4FEB2B7C5847089BFD41BA6 (intptr_t ___csound0, String_t* ___name1, intptr_t ___samples2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C (intptr_t ___source0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/SenseEventCallbackProxy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventCallbackProxy__ctor_m9E6BB1A948FF8CA7A051EF32C7EE6D8A8EA09401 (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle CsoundUnityBridge::SetSenseEventCallback(csoundcsharp.Csound6/SenseEventCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  CsoundUnityBridge_SetSenseEventCallback_mE730C72D3C4465F5D8B76754318554584EF083AE (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * ___callback0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle CsoundUnityBridge::FreezeCallbackInHeap(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  CsoundUnityBridge_FreezeCallbackInHeap_m648987895F877CA02E46D8C411B14194978046C7 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Delegate_t * ___callback0, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundRegisterSenseEventCallback(System.IntPtr,csoundcsharp.Csound6/SenseEventCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundRegisterSenseEventCallback_m787329E3D6561D246E083842A4729765E3014C49 (intptr_t ___csound0, SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * ___senseEventProxy1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mE952A48345C502F782CE38F717F58EDEB7AF03EB (U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * __this, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/YieldCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldCallback__ctor_m84B7710A98C5C898C1D389F4CC04A11F01BA2E73 (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetYieldCallback(System.IntPtr,csoundcsharp.Csound6/YieldCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetYieldCallback_m62D7BA3993E83E8E7978136CE8E539BC5FBD4851 (intptr_t ___csound0, YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * ___yieldCallback1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundTableLength(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE (intptr_t ___csound0, int32_t ___table1, const RuntimeMethod* method);
// System.Single csoundcsharp.Csound6/NativeMethods::csoundTableGet(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundTableGet_m9C5DBF614D6E13871FF2A347BDB4363169D9F79D (intptr_t ___csound0, int32_t ___table1, int32_t ___index2, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableSet(System.IntPtr,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableSet_mF270BCEA1EBB9AAB0D64191F3ABFA4604E55BF95 (intptr_t ___csound0, int32_t ___table1, int32_t ___index2, float ___value3, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyOut(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyOut_m192B5C74EF9EB100C223CD2BE615CE075EACE67B (intptr_t ___csound0, int32_t ___table1, intptr_t ___dest2, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyOutAsync(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyOutAsync_mB96CE207CC6BA17819A7350A99980A24FE4C5D90 (intptr_t ___csound0, int32_t ___table1, intptr_t ___dest2, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyIn(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyIn_mCD71FE5471E156A7C7CF8996C5CD09BDE16E7D21 (intptr_t ___csound0, int32_t ___table1, intptr_t ___source2, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyInAsync(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyInAsync_mCC01AE2BE19AE64917CB91CE7B3E4F20AB47A50B (intptr_t ___csound0, int32_t ___table1, intptr_t ___source2, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetTable(System.IntPtr,System.IntPtr&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetTable_m8B3E25D3B2FD43E6F35C027D1296D7D6A67FEF57 (intptr_t ___csound0, intptr_t* ___tablePtr1, int32_t ___index2, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetTableArgs(System.IntPtr,System.IntPtr&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetTableArgs_m05213248DF67D1CFA01D13CBADE4A692F4AB5560 (intptr_t ___csound0, intptr_t* ___argsPtr1, int32_t ___index2, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundIsNamedGEN(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundIsNamedGEN_m508B3CD25F95AD19D550E27D1D2016B8AC21A37A (intptr_t ___csound0, int32_t ___num1, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundGetNamedGEN(System.IntPtr,System.Int32,System.String&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundGetNamedGEN_m1B32016B5ED11CD511DE032EAD085051432714F7 (intptr_t ___csound0, int32_t ___num1, String_t** ___name2, int32_t ___len3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetNamedGens(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetNamedGens_m438AA04E1327FF971A997F300BDADA95EF992CFB (intptr_t ___csound0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetSr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetSr_mCE3D4166633C56AEF3CD7EA369E36F28F368E733 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetKr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetKr_m793DD4FD8A2961CD84234E28A7678286E2D09E9A (intptr_t ___csound0, const RuntimeMethod* method);
// System.UInt32 csoundcsharp.Csound6/NativeMethods::csoundGetKsmps(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_csoundGetKsmps_m5A342708D72F3371C8DABE2265074835FD5701CC (intptr_t ___csound0, const RuntimeMethod* method);
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetSpoutSample(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetSpoutSample_mBAAC67587670CB34F3C1A64233EBD938B8B27FB7 (intptr_t ___csound0, int32_t ___frame1, int32_t ___channel2, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundAddSpinSample(System.IntPtr,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundAddSpinSample_m0248E060DBA1573CC1CED0A33667908C1D0A0A44 (intptr_t ___csound0, int32_t ___frame1, int32_t ___channel2, float ___sample3, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetSpinSample(System.IntPtr,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetSpinSample_m01868DF7A464BB85FF04A1019B57AE643AA9022F (intptr_t ___csound0, int32_t ___frame1, int32_t ___channel2, float ___value3, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundClearSpin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundClearSpin_mA03F5CC506131658C9D5EF919AB8F04CF5C4F55A (intptr_t ___csound0, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetSpin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetSpin_m64DDBE5163E798A556960527646A2DF2367BC3D8 (intptr_t ___csound0, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetSpout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetSpout_m0B980931D01C0D4F0F62B1CBDAA2A5FD4D52B7B3 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetControlChannel(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetControlChannel_mDBBB70EA9A9AE361FC5F65A5CF7EBA9EC014E3C3 (intptr_t ___csound0, String_t* ___str1, intptr_t ___err2, const RuntimeMethod* method);
// System.UInt32 csoundcsharp.Csound6/NativeMethods::csoundGetNchnlsInput(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_csoundGetNchnlsInput_mBB6CC7B823C5FC61A99E8A87417E445F7504D579 (intptr_t ___csound0, const RuntimeMethod* method);
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetMessageCnt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetMessageCnt_mA35A9B63F94C87DAE3771B94EFDF20EE6CF88C1F (intptr_t ___csound0, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetFirstMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetFirstMessage_m98CF7A9FB2059BD2DE00D1DD47888ACBD1E9CE0C (intptr_t ___csound0, const RuntimeMethod* method);
// System.String CsoundUnityBridge::GetMessageText(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_GetMessageText_mAE4BD34CE808341E0828CEBA3A5F8B26586D34D2 (intptr_t ___message0, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundPopFirstMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundPopFirstMessage_m4F74F640DF657737F64BA36FC5A6D07C3FE79AF3 (intptr_t ___csound0, const RuntimeMethod* method);
// System.String CsoundUnityBridge::CharPtr2String(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_CharPtr2String_mC3BBA7707669C3F28D2F187C85633B4FFBF7E4E2 (intptr_t ___pString0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>::.ctor()
inline void SortedDictionary_2__ctor_mA82B45C5BD1F87AD6CF5B8FEF45E2839CDF5AC07 (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 *, const RuntimeMethod*))SortedDictionary_2__ctor_mF1EB8DF237AE36C66AB3056298D859C139A7F017_gshared)(__this, method);
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundNewOpcodeList(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundNewOpcodeList_mB2587202593A4B1CCE63E0F66DD3986A7D61BC47 (intptr_t ___csound0, intptr_t* ___ppOpcodeList1, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A (Type_t * ___t0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge/OpcodeArgumentTypes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpcodeArgumentTypes__ctor_mFA21E87766997AFBDB6C971BA4D4E217715EF697 (OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>::ContainsKey(!0)
inline bool SortedDictionary_2_ContainsKey_mDFF077AFB1F91693AC83D3EBC896F2DCBDE373C3 (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 *, String_t*, const RuntimeMethod*))SortedDictionary_2_ContainsKey_mC524CC8715D027FB364746134319A31068BBEE03_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<CsoundUnityBridge/OpcodeArgumentTypes>::.ctor()
inline void List_1__ctor_mAD1F34BDD6BE418C53C15AF3E5DA07DBD5F46BD2 (List_1_tAE75B547557D67F43631ACFA1EA0809215A09658 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE75B547557D67F43631ACFA1EA0809215A09658 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>::Add(!0,!1)
inline void SortedDictionary_2_Add_m958B5B246EB03176958590BA8E5DACEF2FD74523 (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 *, String_t*, RuntimeObject*, const RuntimeMethod*))SortedDictionary_2_Add_m3C6A2E81722B70709D757CF1ADD59966F2885952_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.SortedDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>>::get_Item(!0)
inline RuntimeObject* SortedDictionary_2_get_Item_mB455C382DCBB0856EA7D739AE1DB1181709C2980 (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 *, String_t*, const RuntimeMethod*))SortedDictionary_2_get_Item_m82C0F629628A63DFB2814BEB43FFA6BEE2889A47_gshared)(__this, ___key0, method);
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDisposeOpcodeList(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDisposeOpcodeList_m24751428DFF0661F122D85FFB12321E2A84D5782 (intptr_t ___csound0, intptr_t ___ppOpcodeList1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,CsoundUnityBridge/ChannelInfo>::.ctor()
inline void SortedDictionary_2__ctor_m0707084E400A6EBCDDBEF7ED5DD6CC179969FCB1 (SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB *, const RuntimeMethod*))SortedDictionary_2__ctor_mF1EB8DF237AE36C66AB3056298D859C139A7F017_gshared)(__this, method);
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundListChannels(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundListChannels_mAFD2C1491CD2BE5666E30628A68AB0229BFC39B7 (intptr_t ___csound0, intptr_t* ___ppChannels1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge/ChannelInfo::.ctor(System.String,CsoundUnityBridge/ChannelType,CsoundUnityBridge/ChannelDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelInfo__ctor_mD7C0E9940A33872B8E3C52D5392EFF9C8907AE45 (ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * __this, String_t* ____name0, int32_t ____type1, int32_t ____direction2, const RuntimeMethod* method);
// System.Void CsoundUnityBridge/ChannelHints::.ctor(CsoundUnityBridge/ChannelBehavior,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelHints__ctor_m3582AE794DDB3B700DDE400A2DC1DF73AA282FF8 (ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * __this, int32_t ___ibehav0, double ___idflt1, double ___imin2, double ___imax3, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDeleteChannelList(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDeleteChannelList_mBCE04F86005FF12D45E0A961F9D5364F9E55C4B1 (intptr_t ___csound0, intptr_t ___ppChannels1, const RuntimeMethod* method);
// System.Void CsoundUnityBridge/CSOUND_PARAMS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CSOUND_PARAMS__ctor_mF71A292C6ECED74DF43FEB5BB9B1B7BDAF3476FA (CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * __this, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundGetParams(System.IntPtr,CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundGetParams_m3EFF2DFC954864031946B1EAD84580564DC3D9F8 (intptr_t ___csound0, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms1, const RuntimeMethod* method);
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetParams(System.IntPtr,CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetParams_m7E62F007B50FEAC8A6AE628796F3DC064BC5AE61 (intptr_t ___csound0, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms1, const RuntimeMethod* method);
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetEnv(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetEnv_m09E44AC78F0D4B452E874AC6C7F42282B48C737B (intptr_t ___csound0, String_t* ___key1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<CsoundUnity>()
inline CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * GameObject_GetComponent_TisCsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514_m64DBB87317AF84D19DE4E9DEA40F85F602692C29 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m63201E0CAC0E5BC81B5F31F96F1796FD8A43982A (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single CsoundUnity::Get0dbfs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_Get0dbfs_m0A4D6CD4F83FE607BF6A1B38D7B2808C1D06CC06 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single[]>::Add(!0)
inline void List_1_Add_mE89AB76DCBBC9B3561BFEFC9C3F9001F8366E775 (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void CsoundUnityChild::ProcessBlock(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8 (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single[]>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m219AAE29A066F48A86F2454DCD12C07825DF88DC (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, int32_t ___index0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// !0 System.Collections.Generic.List`1<System.Single[]>::get_Item(System.Int32)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_inline (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single[]>::.ctor()
inline void List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64 (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.ResourceRequest UnityEngine.Resources::LoadAsync<UnityEngine.AudioClip>(System.String)
inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * Resources_LoadAsync_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_mD68D1E6639A644A11DC097CF29805AD594A3F496 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * (*) (String_t*, const RuntimeMethod*))Resources_LoadAsync_TisRuntimeObject_mE0B403E9B9FA84ACD847A95576E332CA18785DBD_gshared)(___path0, method);
}
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0 (ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single[]>::Invoke(!0)
inline void Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2 (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void CsoundUnityBridge/ChannelHintsProxy::.ctor(CsoundUnityBridge/ChannelHints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelHintsProxy__ctor_mF3BBD1E4606B03E64FE794BC1F934A79AD73DB6F (ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B * __this, ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * ___hints0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundInitialize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundCreate(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundDestroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetVersion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetAPIVersion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundParseOrc(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCompileTree(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundDeleteTree(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCompileOrc(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundEvalCode(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCompileArgs(intptr_t, int32_t, char**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundStart(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCompile(intptr_t, int32_t, char**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCompileCsd(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCompileCsdText(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundPerform(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundPerformKsmps(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundPerformBuffer(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundStop(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundCleanup(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundReset(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGetSr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGetKr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL csoundGetKsmps(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL csoundGetNchnls(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL csoundGetNchnlsInput(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGet0dBFS(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL csoundGetCurrentTimeSamples(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetSizeOfMYFLT();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetHostData(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetHostData(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundSetOption(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundGetParams(intptr_t, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetParams(intptr_t, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetDebug(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetDebug(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetOutputName(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetOutput(intptr_t, char*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetInput(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetMIDIFileInput(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetMIDIFileOutput(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetFileOpenCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetRTAudioModule(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetModule(intptr_t, int32_t, intptr_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetInputBufferSize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetOutputBufferSize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetSpin(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundClearSpin(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundAddSpinSample(intptr_t, int32_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetSpinSample(intptr_t, int32_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetSpout(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGetSpoutSample(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetHostImplementedAudioIO(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetAudioDevList(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetMIDIModule(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetMIDIDevList(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundReadScore(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGetScoreTime(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundIsScorePending(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetScorePending(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGetScoreOffsetSeconds(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetScoreOffsetSeconds(intptr_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundRewindScore(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundScoreSort(intptr_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundScoreExtract(intptr_t, intptr_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetDefaultMessageCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetMessageCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetMessageLevel(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetMessageLevel(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundCreateMessageBuffer(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetFirstMessage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundPopFirstMessage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetMessageCnt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundDestroyMessageBuffer(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetChannelPtr(intptr_t, intptr_t*, char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundListChannels(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundDeleteChannelList(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundGetControlChannel(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundSetControlChannel(intptr_t, char*, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundGetAudioChannel(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetAudioChannel(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundSetStringChannel(intptr_t, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundInputMessage(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundRegisterSenseEventCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundTableLength(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C float CDECL csoundTableGet(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundTableSet(intptr_t, int32_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundTableCopyOut(intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundTableCopyOutAsync(intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundTableCopyIn(intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundTableCopyInAsync(intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetTable(intptr_t, intptr_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundGetTableArgs(intptr_t, intptr_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundIsNamedGEN(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundGetNamedGEN(intptr_t, int32_t, char**, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetNamedGens(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundNewOpcodeList(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundDisposeOpcodeList(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSetYieldCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundSleep(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL csoundRunCommand(char**, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL csoundGetRandomSeedFromTime();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundGetEnv(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL csoundSetGlobalEnv(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL csoundListUtilities(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
IL2CPP_EXTERN_C void CDECL csoundDeleteUtilityList(intptr_t, intptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void csoundcsharp.Csound6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Csound6__ctor_m7DC918D7F1BBAA8D36165CD89053AC1DC25F30B6 (Csound6_tFE03017ABE82E682CA12F6CC22FC2BFD684D0131 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundChannelController::SetRange(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundChannelController_SetRange_m5A5B3F55784A1B37BC140171F30CD556C31855C1 (CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * __this, float ___uMin0, float ___uMax1, float ___uValue2, const RuntimeMethod* method)
{
	{
		// min = uMin;
		float L_0 = ___uMin0;
		__this->set_min_4(L_0);
		// max = uMax;
		float L_1 = ___uMax1;
		__this->set_max_5(L_1);
		// value = uValue;
		float L_2 = ___uValue2;
		__this->set_value_6(L_2);
		// }
		return;
	}
}
// System.Void CsoundChannelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundChannelController__ctor_mC46635122F6083841B84F503BDF9373E701B6519 (CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public string type = "";
		__this->set_type_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] public string channel = "";
		__this->set_channel_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] public string text = "";
		__this->set_text_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] public string caption = "";
		__this->set_caption_3(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CsoundFilesInfo
IL2CPP_EXTERN_C void CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshal_pinvoke(const CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68& unmarshaled, CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_pinvoke& marshaled)
{
	Exception_t* ___fileNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fileNames' of type 'CsoundFilesInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fileNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshal_pinvoke_back(const CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_pinvoke& marshaled, CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68& unmarshaled)
{
	Exception_t* ___fileNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fileNames' of type 'CsoundFilesInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fileNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CsoundFilesInfo
IL2CPP_EXTERN_C void CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshal_pinvoke_cleanup(CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CsoundFilesInfo
IL2CPP_EXTERN_C void CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshal_com(const CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68& unmarshaled, CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_com& marshaled)
{
	Exception_t* ___fileNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fileNames' of type 'CsoundFilesInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fileNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshal_com_back(const CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_com& marshaled, CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68& unmarshaled)
{
	Exception_t* ___fileNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'fileNames' of type 'CsoundFilesInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___fileNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CsoundFilesInfo
IL2CPP_EXTERN_C void CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshal_com_cleanup(CsoundFilesInfo_t72CE5F8969A92289D8E6F18592F8997EC117CF68_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CsoundUnity::get_csoundFileGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnity_get_csoundFileGUID_mBC06AE8D93CDF917D19C21154963D9A81A4E2A56 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public string csoundFileGUID { get => _csoundFileGUID; }
		String_t* L_0 = __this->get__csoundFileGUID_15();
		return L_0;
	}
}
// System.String CsoundUnity::get_csoundFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnity_get_csoundFileName_m8EB89932B5D37609BBDE5C4958096931B14D7E84 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public string csoundFileName { get => _csoundFileName; }
		String_t* L_0 = __this->get__csoundFileName_17();
		return L_0;
	}
}
// System.String CsoundUnity::get_csoundString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnity_get_csoundString_m946CBAB7BCA31F7B22CBE5947F45E9EEE70888D9 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public string csoundString { get => _csoundString; }
		String_t* L_0 = __this->get__csoundString_16();
		return L_0;
	}
}
// System.Collections.Generic.List`1<CsoundChannelController> CsoundUnity::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public List<CsoundChannelController> channels { get => _channels; }
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_0 = __this->get__channels_18();
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> CsoundUnity::get_availableAudioChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * CsoundUnity_get_availableAudioChannels_m1286F5171116CA5F72E6F08BF7712E8C5C592B8A (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> availableAudioChannels { get => _availableAudioChannels; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get__availableAudioChannels_19();
		return L_0;
	}
}
// System.Boolean CsoundUnity::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CsoundUnity_get_IsInitialized_m725D39860B8AAB50E2AA6ED1A3AE76953DAB9694 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInitialized { get => initialized; }
		bool L_0 = __this->get_initialized_25();
		return L_0;
	}
}
// System.Void CsoundUnity::add_OnCsoundInitialized(CsoundUnity/CsoundInitialized)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_add_OnCsoundInitialized_mFD2538B6E61F842F330E451B6CB1681B3008E737 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * V_0 = NULL;
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * V_1 = NULL;
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * V_2 = NULL;
	{
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_0 = __this->get_OnCsoundInitialized_12();
		V_0 = L_0;
	}

IL_0007:
	{
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_1 = V_0;
		V_1 = L_1;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_2 = V_1;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *)CastclassSealed((RuntimeObject*)L_4, CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2_il2cpp_TypeInfo_var));
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 ** L_5 = __this->get_address_of_OnCsoundInitialized_12();
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_6 = V_2;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_7 = V_1;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *>((CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 **)L_5, L_6, L_7);
		V_0 = L_8;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_9 = V_0;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *)L_9) == ((RuntimeObject*)(CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CsoundUnity::remove_OnCsoundInitialized(CsoundUnity/CsoundInitialized)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_remove_OnCsoundInitialized_m7B3452827A26BBEA0F47BA00E4386FD3EE823AA4 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * V_0 = NULL;
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * V_1 = NULL;
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * V_2 = NULL;
	{
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_0 = __this->get_OnCsoundInitialized_12();
		V_0 = L_0;
	}

IL_0007:
	{
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_1 = V_0;
		V_1 = L_1;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_2 = V_1;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *)CastclassSealed((RuntimeObject*)L_4, CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2_il2cpp_TypeInfo_var));
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 ** L_5 = __this->get_address_of_OnCsoundInitialized_12();
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_6 = V_2;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_7 = V_1;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *>((CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 **)L_5, L_6, L_7);
		V_0 = L_8;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_9 = V_0;
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *)L_9) == ((RuntimeObject*)(CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean CsoundUnity::get_PerformanceFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CsoundUnity_get_PerformanceFinished_mE7B58467B6A6A2DE99CCF233F2AE982589F4625B (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public bool PerformanceFinished { get => performanceFinished; }
		bool L_0 = __this->get_performanceFinished_30();
		return L_0;
	}
}
// System.Void CsoundUnity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_Awake_m7DD851197EE99F40C94BB6CDBA099ED5AB485A58 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m77E8F4856F3368ED3384C38E426ACD2291BAADA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E1A03BFFD4DF94BCC79E7529A5968B1E3E390EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EC4033EBC13E40CDCF2BFE38407870D255B626C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8364E60ECD305F5B3DE480A65818800D826F6450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1F2A9774735699184D8D9B49070909054ED1948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7166306B6FA3F46CB4A3F98517F88550A1B84A4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * G_B15_0 = NULL;
	CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * G_B14_0 = NULL;
	{
		// initialized = false;
		__this->set_initialized_25((bool)0);
		// AudioSettings.GetDSPBufferSize(out bufferSize, out numBuffers);
		int32_t* L_0 = __this->get_address_of_bufferSize_33();
		int32_t* L_1 = __this->get_address_of_numBuffers_34();
		AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052((int32_t*)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		// string dataPath = Path.GetFullPath(Path.Combine("Packages", packageName, "Runtime"));
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m7A2F79646794E197E588558EE81971A0C32A2A6A(_stringLiteralB1F2A9774735699184D8D9B49070909054ED1948, _stringLiteral8364E60ECD305F5B3DE480A65818800D826F6450, _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_31(L_4);
		// csound = new CsoundUnityBridge(dataPath, _csoundString);
		String_t* L_5 = V_0;
		String_t* L_6 = __this->get__csoundString_16();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_7 = (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 *)il2cpp_codegen_object_new(CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217_il2cpp_TypeInfo_var);
		CsoundUnityBridge__ctor_m92C6FC26989C5906E48BF49980EFD8D7D6AFD850(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->set_csound_14(L_7);
		// if (csound != null)
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_8 = __this->get_csound_14();
		if (!L_8)
		{
			goto IL_0187;
		}
	}
	{
		// if (channels != null)
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_9;
		L_9 = CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936_inline(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		// for (int i = 0; i < channels.Count; i++)
		V_1 = 0;
		goto IL_0098;
	}

IL_0067:
	{
		// csound.SetChannel(channels[i].channel, channels[i].value);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_10 = __this->get_csound_14();
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_11;
		L_11 = CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936_inline(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_13;
		L_13 = List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14 = L_13->get_channel_1();
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_15;
		L_15 = CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936_inline(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_17;
		L_17 = List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m0FAEBD096D1E00BB71711871928B0AD1F385E6D3_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18 = L_17->get_value_6();
		NullCheck(L_10);
		CsoundUnityBridge_SetChannel_m4F75122437E23A56EB83421D98343AD48BA7AB11(L_10, L_14, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < channels.Count; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0098:
	{
		// for (int i = 0; i < channels.Count; i++)
		int32_t L_20 = V_1;
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_21;
		L_21 = CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m77E8F4856F3368ED3384C38E426ACD2291BAADA8_inline(L_21, /*hidden argument*/List_1_get_Count_m77E8F4856F3368ED3384C38E426ACD2291BAADA8_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0067;
		}
	}

IL_00a6:
	{
		// foreach (var name in availableAudioChannels)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_23;
		L_23 = CsoundUnity_get_availableAudioChannels_m1286F5171116CA5F72E6F08BF7712E8C5C592B8A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_24;
		L_24 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_23, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_2 = L_24;
	}

IL_00b2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f8;
		}

IL_00b4:
		{
			// foreach (var name in availableAudioChannels)
			String_t* L_25;
			L_25 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_3 = L_25;
			// if (!namedAudioChannelDataDict.ContainsKey(name))
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_26 = __this->get_namedAudioChannelDataDict_11();
			String_t* L_27 = V_3;
			NullCheck(L_26);
			bool L_28;
			L_28 = Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03(L_26, L_27, /*hidden argument*/Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_00f8;
			}
		}

IL_00ca:
		{
			// namedAudioChannelDataDict.Add(name, new MYFLT[bufferSize]);
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_29 = __this->get_namedAudioChannelDataDict_11();
			String_t* L_30 = V_3;
			int32_t L_31 = __this->get_bufferSize_33();
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_31);
			NullCheck(L_29);
			Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B(L_29, L_30, L_32, /*hidden argument*/Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B_RuntimeMethod_var);
			// namedAudioChannelTempBufferDict.Add(name, new MYFLT[ksmps]);
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_33 = __this->get_namedAudioChannelTempBufferDict_35();
			String_t* L_34 = V_3;
			uint32_t L_35 = __this->get_ksmps_26();
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_35);
			NullCheck(L_33);
			Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B(L_33, L_34, L_36, /*hidden argument*/Dictionary_2_Add_m1269B2B80B4A94D4E46ED70E42FA6476F5E1EA0B_RuntimeMethod_var);
		}

IL_00f8:
		{
			// foreach (var name in availableAudioChannels)
			bool L_37;
			L_37 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_00b4;
			}
		}

IL_0101:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0103);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0103;
	}

FINALLY_0103:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(259)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(259)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x111, IL_0111)
	}

IL_0111:
	{
		// LoggingCoroutine = StartCoroutine(Logging(.01f));
		RuntimeObject* L_38;
		L_38 = CsoundUnity_Logging_m24AFC2F9275183BAAEAF901BC5C1270DAC253B48(__this, (0.00999999978f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_39;
		L_39 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_38, /*hidden argument*/NULL);
		__this->set_LoggingCoroutine_32(L_39);
		// compiledOk = csound.CompiledWithoutError();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_40 = __this->get_csound_14();
		NullCheck(L_40);
		bool L_41;
		L_41 = CsoundUnityBridge_CompiledWithoutError_mBDC47E361F054835CF04FD5638FA75D3E8E87124_inline(L_40, /*hidden argument*/NULL);
		__this->set_compiledOk_29(L_41);
		// if (compiledOk)
		bool L_42 = __this->get_compiledOk_29();
		if (!L_42)
		{
			goto IL_0198;
		}
	}
	{
		// zerdbfs = (float)csound.Get0dbfs();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_43 = __this->get_csound_14();
		NullCheck(L_43);
		float L_44;
		L_44 = CsoundUnityBridge_Get0dbfs_m5CBA5CE962CC46A86A88CD0B35BF2C7E5DA773A3(L_43, /*hidden argument*/NULL);
		__this->set_zerdbfs_28(((float)((float)L_44)));
		// Debug.Log("zerdbfs " + zerdbfs);
		float* L_45 = __this->get_address_of_zerdbfs_28();
		String_t* L_46;
		L_46 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_45, /*hidden argument*/NULL);
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2EC4033EBC13E40CDCF2BFE38407870D255B626C, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_47, /*hidden argument*/NULL);
		// initialized = true;
		__this->set_initialized_25((bool)1);
		// OnCsoundInitialized?.Invoke();
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_48 = __this->get_OnCsoundInitialized_12();
		CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * L_49 = L_48;
		G_B14_0 = L_49;
		if (L_49)
		{
			G_B15_0 = L_49;
			goto IL_0180;
		}
	}
	{
		goto IL_0198;
	}

IL_0180:
	{
		NullCheck(G_B15_0);
		CsoundInitialized_Invoke_mE03151B6AFDEC8D673ABEB877FD44F02F653316C(G_B15_0, /*hidden argument*/NULL);
		// }
		goto IL_0198;
	}

IL_0187:
	{
		// Debug.Log("Error creating Csound object");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF7166306B6FA3F46CB4A3F98517F88550A1B84A4, /*hidden argument*/NULL);
		// compiledOk = false;
		__this->set_compiledOk_29((bool)0);
	}

IL_0198:
	{
		// Debug.Log("CsoundUnity done init, compiledOk? " + compiledOk);
		bool* L_50 = __this->get_address_of_compiledOk_29();
		String_t* L_51;
		L_51 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_50, /*hidden argument*/NULL);
		String_t* L_52;
		L_52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1E1A03BFFD4DF94BCC79E7529A5968B1E3E390EB, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CsoundUnity::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_GetVersion_m738D61CA5086A377E627C47B8CD96AAF06DB4464 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetVersion();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CsoundUnityBridge_GetVersion_mCA0A43310E74C944C2B3BA36A4160C782C082B3B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 CsoundUnity::GetAPIVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_GetAPIVersion_m5E9A211EAED08AE65A19586BF6F0FEF28A8B136A (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetAPIVersion();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CsoundUnityBridge_GetAPIVersion_mF9B12160D9BBE707AAED7C6C04E49AA67D01537E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CsoundUnity::CompiledWithoutError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CsoundUnity_CompiledWithoutError_m16E687A1C75EA0D6B999B3E8A6BC35A2E8361CD7 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return compiledOk;
		bool L_0 = __this->get_compiledOk_29();
		return L_0;
	}
}
// System.Void CsoundUnity::SetCsd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetCsd_mFE1A316A5D7BC498F38137B2250284622C53562F (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___guid0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32 CsoundUnity::CompileOrc(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_CompileOrc_mE0E0AF5F1E97AC4F026E61CAA8F0527E645047C5 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___orcStr0, const RuntimeMethod* method)
{
	{
		// return csound.CompileOrc(orcStr);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		String_t* L_1 = ___orcStr0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = CsoundUnityBridge_CompileOrc_mB14FFC8E627E9BD359473B92746687933F0AAC89(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void CsoundUnity::SendScoreEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SendScoreEvent_m37E43932223F7D1FEBBD92894622070904D31553 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___scoreEvent0, const RuntimeMethod* method)
{
	{
		// csound.SendScoreEvent(scoreEvent);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		String_t* L_1 = ___scoreEvent0;
		NullCheck(L_0);
		CsoundUnityBridge_SendScoreEvent_m5D13110D6A8DBF9E0F9E4EBAA21D4EFD7E19B3DF(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::RewindScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_RewindScore_m1F9A99BA209CC09BB4977B6663D8C7A81796E4B2 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// csound.RewindScore();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		CsoundUnityBridge_RewindScore_m466FAB401153CCAB90430585074CF6D3D2865EAA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::SetScoreOffsetSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetScoreOffsetSeconds_mA6A8FEF97158D5084ADBF82381749F2584321B7A (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// csound.CsoundSetScoreOffsetSeconds(value);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		float L_1 = ___value0;
		NullCheck(L_0);
		CsoundUnityBridge_CsoundSetScoreOffsetSeconds_m8D060AD776D4D42BE9D77F5570E2D8320CC742ED(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single CsoundUnity::GetSr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_GetSr_m9156344908089B05A004471FEEA20BD0E8CC9CC0 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetSr();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		float L_1;
		L_1 = CsoundUnityBridge_GetSr_m93F12085684EA62D2355A281E7430A309E82E046(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CsoundUnity::GetKr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_GetKr_m8BCF1637605AAD317061AF48E6B284421AE052C9 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetKr();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		float L_1;
		L_1 = CsoundUnityBridge_GetKr_m0981FCD2B8EE25391A88B0FB54A6A33C6F9E81BC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 CsoundUnity::PerformKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_PerformKsmps_m9A937E2C38A495339AD2B9DB2405EC771F7CA585 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.PerformKsmps();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CsoundUnityBridge_PerformKsmps_m3492EF5A53A00761CAF9DF2511119CFFA6FEE23E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 CsoundUnity::GetKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnity_GetKsmps_m243C7D7A2136CABF157C176C9BEFC85465B84779 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetKsmps();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = CsoundUnityBridge_GetKsmps_m2DFC2E523372FF7EFF5CD5400B9316A75DE5890A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.String> CsoundUnity::ParseCsdFileForAudioChannels(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * CsoundUnity_ParseCsdFileForAudioChannels_m238C23F42B068FFDF5303E036180E0A520FE2C37 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF51D828E4C0C54643490DF51A616C037A9FA76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0F36134CE3CE52AE20222DF2DE67DF30E37F6F);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		// if (!File.Exists(filename)) return null;
		String_t* L_0 = ___filename0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!File.Exists(filename)) return null;
		return (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL;
	}

IL_000a:
	{
		// string[] fullCsdText = File.ReadAllLines(filename);
		String_t* L_2 = ___filename0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = File_ReadAllLines_m705F4709C4562B0E24E95613867A32232DB42633(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (fullCsdText.Length < 1) return null;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) >= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		// if (fullCsdText.Length < 1) return null;
		return (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL;
	}

IL_0019:
	{
		// List<string> locaAudioChannels = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = L_5;
		// foreach (string line in fullCsdText)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_00ec;
	}

IL_0028:
	{
		// foreach (string line in fullCsdText)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// var trimmd = line.TrimStart();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11;
		L_11 = Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_inline(/*hidden argument*/Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A(L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		// if (!trimmd.Contains("chnset")) continue;
		String_t* L_13 = V_4;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_13, _stringLiteral8AF51D828E4C0C54643490DF51A616C037A9FA76, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00e8;
		}
	}
	{
		// if (trimmd.StartsWith(";")) continue;
		String_t* L_15 = V_4;
		NullCheck(L_15);
		bool L_16;
		L_16 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_15, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00e8;
		}
	}
	{
		// var lndx = trimmd.IndexOf("chnset");
		String_t* L_17 = V_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_17, _stringLiteral8AF51D828E4C0C54643490DF51A616C037A9FA76, /*hidden argument*/NULL);
		// var chnsetEnd = lndx + "chnset".Length + 1;
		NullCheck(_stringLiteral8AF51D828E4C0C54643490DF51A616C037A9FA76);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral8AF51D828E4C0C54643490DF51A616C037A9FA76, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)), (int32_t)1));
		// var prms = trimmd.Substring(chnsetEnd, trimmd.Length - chnsetEnd);
		String_t* L_20 = V_4;
		int32_t L_21 = V_5;
		String_t* L_22 = V_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_5;
		NullCheck(L_20);
		String_t* L_25;
		L_25 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		// var split = prms.Split(',');
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = L_26;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28;
		L_28 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_25, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		// if (!split[0].StartsWith("a") && !split[0].StartsWith("ga"))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_6;
		NullCheck(L_29);
		int32_t L_30 = 0;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		bool L_32;
		L_32 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_31, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00b9;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = V_6;
		NullCheck(L_33);
		int32_t L_34 = 0;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		bool L_36;
		L_36 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_35, _stringLiteralBA0F36134CE3CE52AE20222DF2DE67DF30E37F6F, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00e8;
		}
	}

IL_00b9:
	{
		// var ach = split[1].Replace('\\', ' ').Replace('\"', ' ').Trim();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = V_6;
		NullCheck(L_37);
		int32_t L_38 = 1;
		String_t* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		String_t* L_40;
		L_40 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_39, ((int32_t)92), ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_40, ((int32_t)34), ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_41, /*hidden argument*/NULL);
		V_7 = L_42;
		// if (!locaAudioChannels.Contains(ach))
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_43 = V_1;
		String_t* L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_43, L_44, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (L_45)
		{
			goto IL_00e8;
		}
	}
	{
		// locaAudioChannels.Add(ach);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_46 = V_1;
		String_t* L_47 = V_7;
		NullCheck(L_46);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_46, L_47, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_00e8:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00ec:
	{
		// foreach (string line in fullCsdText)
		int32_t L_49 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = V_2;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		// return locaAudioChannels;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_51 = V_1;
		return L_51;
	}
}
// System.Collections.Generic.List`1<CsoundChannelController> CsoundUnity::ParseCsdFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * CsoundUnity_ParseCsdFile_mD8C237FAA57E15BDB0148B5F0B03F2D9605DF998 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE54AF0F12D36E6C373EAE66E716139EEFA6C724E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A1E49F52FBED4E2D65BE24E440C2ECB49C93CA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15481F17D604745DD863415C00F6407B50AF5E08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26031819C994820EEDDCC91A78B187D2C34F0AEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29EB8705C3C3C51078042C550ADAE5EF11D49BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral366CFA846440793E062002B50B772FC743DE407F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E7DB3D1E6E4662ED36CB418794A1010D7F283A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A1CE853F9597B27CEC6B2940D6A044A0D8B55D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CC9AC6DAEB5A46966E41406699E8D76F2BBB0C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9984D8D392A564CD414347CA62734784B79A3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD1529D74B641AB6519C5679DB4983CF2DCD11ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE90C1239819816D8576FF43BCAF9A379E8A945E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4F22069B1CDA51FC6A6B52CF60F6EFBF7BF3FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF585490DBD47568A9115D41FE285A01E5A3D94D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_11 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_12 = NULL;
	int32_t V_13 = 0;
	String_t* V_14 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_15 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_16 = NULL;
	int32_t V_17 = 0;
	String_t* V_18 = NULL;
	int32_t V_19 = 0;
	String_t* V_20 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_21 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_22 = NULL;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	int32_t V_26 = 0;
	String_t* V_27 = NULL;
	int32_t G_B9_0 = 0;
	String_t* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	String_t* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	String_t* G_B10_2 = NULL;
	CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * G_B47_0 = NULL;
	CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * G_B46_0 = NULL;
	float G_B48_0 = 0.0f;
	CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * G_B48_1 = NULL;
	{
		// if (!File.Exists(filename)) return null;
		String_t* L_0 = ___filename0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!File.Exists(filename)) return null;
		return (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *)NULL;
	}

IL_000a:
	{
		// string[] fullCsdText = File.ReadAllLines(filename);
		String_t* L_2 = ___filename0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = File_ReadAllLines_m705F4709C4562B0E24E95613867A32232DB42633(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (fullCsdText.Length < 1) return null;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) >= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		// if (fullCsdText.Length < 1) return null;
		return (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *)NULL;
	}

IL_0019:
	{
		// locaChannelControllers = new List<CsoundChannelController>();
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_5 = (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *)il2cpp_codegen_object_new(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_il2cpp_TypeInfo_var);
		List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1(L_5, /*hidden argument*/List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1_RuntimeMethod_var);
		V_1 = L_5;
		// foreach (string line in fullCsdText)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_051b;
	}

IL_0028:
	{
		// foreach (string line in fullCsdText)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// if (line.Contains("</"))
		String_t* L_11 = V_4;
		NullCheck(L_11);
		bool L_12;
		L_12 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_11, _stringLiteralDD1529D74B641AB6519C5679DB4983CF2DCD11ED, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0524;
		}
	}
	{
		// var trimmd = line.TrimStart();
		String_t* L_13 = V_4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14;
		L_14 = Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_inline(/*hidden argument*/Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A(L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		// if (trimmd.StartsWith(";"))
		String_t* L_16 = V_5;
		NullCheck(L_16);
		bool L_17;
		L_17 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_16, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0517;
		}
	}
	{
		// string newLine = trimmd;
		String_t* L_18 = V_5;
		V_6 = L_18;
		// string control = trimmd.Substring(0, trimmd.IndexOf(" ") > -1 ? trimmd.IndexOf(" ") : 0);
		String_t* L_19 = V_5;
		String_t* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		G_B8_0 = 0;
		G_B8_1 = L_19;
		if ((((int32_t)L_21) > ((int32_t)(-1))))
		{
			G_B9_0 = 0;
			G_B9_1 = L_19;
			goto IL_0076;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0082;
	}

IL_0076:
	{
		String_t* L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		G_B10_0 = L_23;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0082:
	{
		NullCheck(G_B10_2);
		String_t* L_24;
		L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		V_7 = L_24;
		// if (control.Length > 0)
		String_t* L_25 = V_7;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		// newLine = newLine.Replace(control, "");
		String_t* L_27 = V_6;
		String_t* L_28 = V_7;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_27, L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_6 = L_29;
	}

IL_00a3:
	{
		// if (control.Contains("slider") || control.Contains("button") || control.Contains("checkbox")
		//     || control.Contains("groupbox") || control.Contains("form") || control.Contains("combobox"))
		String_t* L_30 = V_7;
		NullCheck(L_30);
		bool L_31;
		L_31 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_30, _stringLiteral0A1E49F52FBED4E2D65BE24E440C2ECB49C93CA5, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_7;
		NullCheck(L_32);
		bool L_33;
		L_33 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_32, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_34 = V_7;
		NullCheck(L_34);
		bool L_35;
		L_35 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_34, _stringLiteralF4F22069B1CDA51FC6A6B52CF60F6EFBF7BF3FFB, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_36 = V_7;
		NullCheck(L_36);
		bool L_37;
		L_37 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_36, _stringLiteral15481F17D604745DD863415C00F6407B50AF5E08, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_38 = V_7;
		NullCheck(L_38);
		bool L_39;
		L_39 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_38, _stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_40 = V_7;
		NullCheck(L_40);
		bool L_41;
		L_41 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_40, _stringLiteralE90C1239819816D8576FF43BCAF9A379E8A945E4, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0517;
		}
	}

IL_00fa:
	{
		// CsoundChannelController controller = new CsoundChannelController();
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_42 = (CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C *)il2cpp_codegen_object_new(CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C_il2cpp_TypeInfo_var);
		CsoundChannelController__ctor_mC46635122F6083841B84F503BDF9373E701B6519(L_42, /*hidden argument*/NULL);
		V_8 = L_42;
		// controller.type = control;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_43 = V_8;
		String_t* L_44 = V_7;
		NullCheck(L_43);
		L_43->set_type_0(L_44);
		// if (trimmd.IndexOf("caption(") > -1)
		String_t* L_45 = V_5;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_45, _stringLiteral29EB8705C3C3C51078042C550ADAE5EF11D49BC8, /*hidden argument*/NULL);
		if ((((int32_t)L_46) <= ((int32_t)(-1))))
		{
			goto IL_0152;
		}
	}
	{
		// string infoText = trimmd.Substring(trimmd.IndexOf("caption(") + 9);
		String_t* L_47 = V_5;
		String_t* L_48 = V_5;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_48, _stringLiteral29EB8705C3C3C51078042C550ADAE5EF11D49BC8, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_50;
		L_50 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_47, ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)((int32_t)9))), /*hidden argument*/NULL);
		V_9 = L_50;
		// infoText = infoText.Substring(0, infoText.IndexOf(")") - 1);
		String_t* L_51 = V_9;
		String_t* L_52 = V_9;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_52, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_51);
		String_t* L_54;
		L_54 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_51, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1)), /*hidden argument*/NULL);
		V_9 = L_54;
		// controller.caption = infoText;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_55 = V_8;
		String_t* L_56 = V_9;
		NullCheck(L_55);
		L_55->set_caption_3(L_56);
	}

IL_0152:
	{
		// if (trimmd.IndexOf("text(") > -1)
		String_t* L_57 = V_5;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_57, _stringLiteral9CC9AC6DAEB5A46966E41406699E8D76F2BBB0C5, /*hidden argument*/NULL);
		if ((((int32_t)L_58) <= ((int32_t)(-1))))
		{
			goto IL_022a;
		}
	}
	{
		// string text = trimmd.Substring(trimmd.IndexOf("text(") + 6);
		String_t* L_59 = V_5;
		String_t* L_60 = V_5;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_60, _stringLiteral9CC9AC6DAEB5A46966E41406699E8D76F2BBB0C5, /*hidden argument*/NULL);
		NullCheck(L_59);
		String_t* L_62;
		L_62 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_59, ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)6)), /*hidden argument*/NULL);
		V_10 = L_62;
		// text = text.Substring(0, text.IndexOf(")") - 1);
		String_t* L_63 = V_10;
		String_t* L_64 = V_10;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_64, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_63);
		String_t* L_66;
		L_66 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_63, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1)), /*hidden argument*/NULL);
		V_10 = L_66;
		// text = text.Replace("\"", "");
		String_t* L_67 = V_10;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_67, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_10 = L_68;
		// text = text.Replace('"', new char());
		String_t* L_69 = V_10;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_69, ((int32_t)34), 0, /*hidden argument*/NULL);
		V_10 = L_70;
		// if (controller.type == "combobox") //if combobox, create a range
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_71 = V_8;
		NullCheck(L_71);
		String_t* L_72 = L_71->get_type_0();
		bool L_73;
		L_73 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_72, _stringLiteralE90C1239819816D8576FF43BCAF9A379E8A945E4, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_022a;
		}
	}
	{
		// char[] delimiterChars = { ',' };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_74 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		V_11 = L_75;
		// string[] tokens = text.Split(delimiterChars);
		String_t* L_76 = V_10;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_77 = V_11;
		NullCheck(L_76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78;
		L_78 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_76, L_77, /*hidden argument*/NULL);
		V_12 = L_78;
		// controller.SetRange(1, tokens.Length, 0);
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_79 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_12;
		NullCheck(L_80);
		NullCheck(L_79);
		CsoundChannelController_SetRange_m5A5B3F55784A1B37BC140171F30CD556C31855C1(L_79, (1.0f), ((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length))))), (0.0f), /*hidden argument*/NULL);
		// for (var o = 0; o < tokens.Length; o++)
		V_13 = 0;
		goto IL_0219;
	}

IL_01f8:
	{
		// tokens[o] = string.Join("", tokens[o].Split(default(string[]), System.StringSplitOptions.RemoveEmptyEntries));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = V_12;
		int32_t L_82 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = V_12;
		int32_t L_84 = V_13;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		String_t* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87;
		L_87 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_86, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, 1, /*hidden argument*/NULL);
		String_t* L_88;
		L_88 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_87, /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_88);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (String_t*)L_88);
		// for (var o = 0; o < tokens.Length; o++)
		int32_t L_89 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_0219:
	{
		// for (var o = 0; o < tokens.Length; o++)
		int32_t L_90 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = V_12;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length))))))
		{
			goto IL_01f8;
		}
	}
	{
		// controller.options = tokens;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_92 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = V_12;
		NullCheck(L_92);
		L_92->set_options_9(L_93);
	}

IL_022a:
	{
		// if (trimmd.IndexOf("items(") > -1)
		String_t* L_94 = V_5;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_94, _stringLiteral83A1CE853F9597B27CEC6B2940D6A044A0D8B55D, /*hidden argument*/NULL);
		if ((((int32_t)L_95) <= ((int32_t)(-1))))
		{
			goto IL_0302;
		}
	}
	{
		// string text = trimmd.Substring(trimmd.IndexOf("items(") + 7);
		String_t* L_96 = V_5;
		String_t* L_97 = V_5;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_97, _stringLiteral83A1CE853F9597B27CEC6B2940D6A044A0D8B55D, /*hidden argument*/NULL);
		NullCheck(L_96);
		String_t* L_99;
		L_99 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_96, ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)7)), /*hidden argument*/NULL);
		V_14 = L_99;
		// text = text.Substring(0, text.IndexOf(")") - 1);
		String_t* L_100 = V_14;
		String_t* L_101 = V_14;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_101, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_100);
		String_t* L_103;
		L_103 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_100, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)1)), /*hidden argument*/NULL);
		V_14 = L_103;
		// text = text.Replace("\"", "");
		String_t* L_104 = V_14;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_104, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_14 = L_105;
		// text = text.Replace('"', new char());
		String_t* L_106 = V_14;
		NullCheck(L_106);
		String_t* L_107;
		L_107 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_106, ((int32_t)34), 0, /*hidden argument*/NULL);
		V_14 = L_107;
		// if (controller.type == "combobox")
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_108 = V_8;
		NullCheck(L_108);
		String_t* L_109 = L_108->get_type_0();
		bool L_110;
		L_110 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_109, _stringLiteralE90C1239819816D8576FF43BCAF9A379E8A945E4, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_0302;
		}
	}
	{
		// char[] delimiterChars = { ',' };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_111 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_112 = L_111;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		V_15 = L_112;
		// string[] tokens = text.Split(delimiterChars);
		String_t* L_113 = V_14;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_114 = V_15;
		NullCheck(L_113);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115;
		L_115 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_113, L_114, /*hidden argument*/NULL);
		V_16 = L_115;
		// controller.SetRange(1, tokens.Length, 0);
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_116 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_117 = V_16;
		NullCheck(L_117);
		NullCheck(L_116);
		CsoundChannelController_SetRange_m5A5B3F55784A1B37BC140171F30CD556C31855C1(L_116, (1.0f), ((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_117)->max_length))))), (0.0f), /*hidden argument*/NULL);
		// for (var o = 0; o < tokens.Length; o++)
		V_17 = 0;
		goto IL_02f1;
	}

IL_02d0:
	{
		// tokens[o] = string.Join("", tokens[o].Split(default(string[]), System.StringSplitOptions.RemoveEmptyEntries));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = V_16;
		int32_t L_119 = V_17;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = V_16;
		int32_t L_121 = V_17;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		String_t* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124;
		L_124 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_123, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, 1, /*hidden argument*/NULL);
		String_t* L_125;
		L_125 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_124, /*hidden argument*/NULL);
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_125);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (String_t*)L_125);
		// for (var o = 0; o < tokens.Length; o++)
		int32_t L_126 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
	}

IL_02f1:
	{
		// for (var o = 0; o < tokens.Length; o++)
		int32_t L_127 = V_17;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_128 = V_16;
		NullCheck(L_128);
		if ((((int32_t)L_127) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_128)->max_length))))))
		{
			goto IL_02d0;
		}
	}
	{
		// controller.options = tokens;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_129 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = V_16;
		NullCheck(L_129);
		L_129->set_options_9(L_130);
	}

IL_0302:
	{
		// if (trimmd.IndexOf("channel(") > -1)
		String_t* L_131 = V_5;
		NullCheck(L_131);
		int32_t L_132;
		L_132 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_131, _stringLiteral6E7DB3D1E6E4662ED36CB418794A1010D7F283A2, /*hidden argument*/NULL);
		if ((((int32_t)L_132) <= ((int32_t)(-1))))
		{
			goto IL_034a;
		}
	}
	{
		// string channel = trimmd.Substring(trimmd.IndexOf("channel(") + 9);
		String_t* L_133 = V_5;
		String_t* L_134 = V_5;
		NullCheck(L_134);
		int32_t L_135;
		L_135 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_134, _stringLiteral6E7DB3D1E6E4662ED36CB418794A1010D7F283A2, /*hidden argument*/NULL);
		NullCheck(L_133);
		String_t* L_136;
		L_136 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_133, ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)((int32_t)9))), /*hidden argument*/NULL);
		V_18 = L_136;
		// channel = channel.Substring(0, channel.IndexOf(")") - 1);
		String_t* L_137 = V_18;
		String_t* L_138 = V_18;
		NullCheck(L_138);
		int32_t L_139;
		L_139 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_138, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_137);
		String_t* L_140;
		L_140 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_137, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)1)), /*hidden argument*/NULL);
		V_18 = L_140;
		// controller.channel = channel;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_141 = V_8;
		String_t* L_142 = V_18;
		NullCheck(L_141);
		L_141->set_channel_1(L_142);
	}

IL_034a:
	{
		// if (trimmd.IndexOf("range(") > -1)
		String_t* L_143 = V_5;
		NullCheck(L_143);
		int32_t L_144;
		L_144 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_143, _stringLiteral26031819C994820EEDDCC91A78B187D2C34F0AEB, /*hidden argument*/NULL);
		if ((((int32_t)L_144) <= ((int32_t)(-1))))
		{
			goto IL_0477;
		}
	}
	{
		// int rangeAt = trimmd.IndexOf("range(");
		String_t* L_145 = V_5;
		NullCheck(L_145);
		int32_t L_146;
		L_146 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_145, _stringLiteral26031819C994820EEDDCC91A78B187D2C34F0AEB, /*hidden argument*/NULL);
		V_19 = L_146;
		// if (rangeAt != -1)
		int32_t L_147 = V_19;
		if ((((int32_t)L_147) == ((int32_t)(-1))))
		{
			goto IL_0477;
		}
	}
	{
		// string range = trimmd.Substring(rangeAt + 6);
		String_t* L_148 = V_5;
		int32_t L_149 = V_19;
		NullCheck(L_148);
		String_t* L_150;
		L_150 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_148, ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)6)), /*hidden argument*/NULL);
		V_20 = L_150;
		// range = range.Substring(0, range.IndexOf(")"));
		String_t* L_151 = V_20;
		String_t* L_152 = V_20;
		NullCheck(L_152);
		int32_t L_153;
		L_153 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_152, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_151);
		String_t* L_154;
		L_154 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_151, 0, L_153, /*hidden argument*/NULL);
		V_20 = L_154;
		// char[] delimiterChars = { ',' };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_155 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_156 = L_155;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		V_21 = L_156;
		// string[] tokens = range.Split(delimiterChars);
		String_t* L_157 = V_20;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_158 = V_21;
		NullCheck(L_157);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_159;
		L_159 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_157, L_158, /*hidden argument*/NULL);
		V_22 = L_159;
		// for (var i = 0; i < tokens.Length; i++)
		V_26 = 0;
		goto IL_042f;
	}

IL_03b2:
	{
		// tokens[i] = string.Join("", tokens[i].Split(default(string[]), StringSplitOptions.RemoveEmptyEntries));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_160 = V_22;
		int32_t L_161 = V_26;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = V_22;
		int32_t L_163 = V_26;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		String_t* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		NullCheck(L_165);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_166;
		L_166 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_165, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, 1, /*hidden argument*/NULL);
		String_t* L_167;
		L_167 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_166, /*hidden argument*/NULL);
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, L_167);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (String_t*)L_167);
		// if (tokens[i].StartsWith("."))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_168 = V_22;
		int32_t L_169 = V_26;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		String_t* L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		NullCheck(L_171);
		bool L_172;
		L_172 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_171, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (!L_172)
		{
			goto IL_03f2;
		}
	}
	{
		// tokens[i] = "0" + tokens[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_173 = V_22;
		int32_t L_174 = V_26;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_175 = V_22;
		int32_t L_176 = V_26;
		NullCheck(L_175);
		int32_t L_177 = L_176;
		String_t* L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		String_t* L_179;
		L_179 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_178, /*hidden argument*/NULL);
		NullCheck(L_173);
		ArrayElementTypeCheck (L_173, L_179);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (String_t*)L_179);
	}

IL_03f2:
	{
		// if (tokens[i].StartsWith("-."))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_180 = V_22;
		int32_t L_181 = V_26;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		String_t* L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_183);
		bool L_184;
		L_184 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_183, _stringLiteralF585490DBD47568A9115D41FE285A01E5A3D94D1, /*hidden argument*/NULL);
		if (!L_184)
		{
			goto IL_0429;
		}
	}
	{
		// tokens[i] = "-0" + tokens[i].Substring(2, tokens[i].Length - 2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_185 = V_22;
		int32_t L_186 = V_26;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_187 = V_22;
		int32_t L_188 = V_26;
		NullCheck(L_187);
		int32_t L_189 = L_188;
		String_t* L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_191 = V_22;
		int32_t L_192 = V_26;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		String_t* L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		NullCheck(L_194);
		int32_t L_195;
		L_195 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_194, /*hidden argument*/NULL);
		NullCheck(L_190);
		String_t* L_196;
		L_196 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_190, 2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_195, (int32_t)2)), /*hidden argument*/NULL);
		String_t* L_197;
		L_197 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9D9984D8D392A564CD414347CA62734784B79A3B, L_196, /*hidden argument*/NULL);
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_197);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(L_186), (String_t*)L_197);
	}

IL_0429:
	{
		// for (var i = 0; i < tokens.Length; i++)
		int32_t L_198 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)1));
	}

IL_042f:
	{
		// for (var i = 0; i < tokens.Length; i++)
		int32_t L_199 = V_26;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_200 = V_22;
		NullCheck(L_200);
		if ((((int32_t)L_199) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_200)->max_length))))))
		{
			goto IL_03b2;
		}
	}
	{
		// var min = float.Parse(tokens[0], CultureInfo.InvariantCulture);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_201 = V_22;
		NullCheck(L_201);
		int32_t L_202 = 0;
		String_t* L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_204;
		L_204 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float L_205;
		L_205 = Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101(L_203, L_204, /*hidden argument*/NULL);
		V_23 = L_205;
		// var max = float.Parse(tokens[1], CultureInfo.InvariantCulture);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_206 = V_22;
		NullCheck(L_206);
		int32_t L_207 = 1;
		String_t* L_208 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_209;
		L_209 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float L_210;
		L_210 = Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101(L_208, L_209, /*hidden argument*/NULL);
		V_24 = L_210;
		// var val = float.Parse(tokens[2], CultureInfo.InvariantCulture);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_211 = V_22;
		NullCheck(L_211);
		int32_t L_212 = 2;
		String_t* L_213 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_214;
		L_214 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float L_215;
		L_215 = Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101(L_213, L_214, /*hidden argument*/NULL);
		V_25 = L_215;
		// controller.SetRange(min, max, val);
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_216 = V_8;
		float L_217 = V_23;
		float L_218 = V_24;
		float L_219 = V_25;
		NullCheck(L_216);
		CsoundChannelController_SetRange_m5A5B3F55784A1B37BC140171F30CD556C31855C1(L_216, L_217, L_218, L_219, /*hidden argument*/NULL);
	}

IL_0477:
	{
		// if (line.IndexOf("value(") > -1)
		String_t* L_220 = V_4;
		NullCheck(L_220);
		int32_t L_221;
		L_221 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_220, _stringLiteral366CFA846440793E062002B50B772FC743DE407F, /*hidden argument*/NULL);
		if ((((int32_t)L_221) <= ((int32_t)(-1))))
		{
			goto IL_050f;
		}
	}
	{
		// string value = trimmd.Substring(trimmd.IndexOf("value(") + 6);
		String_t* L_222 = V_5;
		String_t* L_223 = V_5;
		NullCheck(L_223);
		int32_t L_224;
		L_224 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_223, _stringLiteral366CFA846440793E062002B50B772FC743DE407F, /*hidden argument*/NULL);
		NullCheck(L_222);
		String_t* L_225;
		L_225 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_222, ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)6)), /*hidden argument*/NULL);
		V_27 = L_225;
		// value = value.Substring(0, value.IndexOf(")"));
		String_t* L_226 = V_27;
		String_t* L_227 = V_27;
		NullCheck(L_227);
		int32_t L_228;
		L_228 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_227, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_226);
		String_t* L_229;
		L_229 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_226, 0, L_228, /*hidden argument*/NULL);
		V_27 = L_229;
		// value = value.Replace("\"", "");
		String_t* L_230 = V_27;
		NullCheck(L_230);
		String_t* L_231;
		L_231 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_230, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_27 = L_231;
		// controller.value = value.Length > 0 ? float.Parse(value, CultureInfo.InvariantCulture) : 0;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_232 = V_8;
		String_t* L_233 = V_27;
		NullCheck(L_233);
		int32_t L_234;
		L_234 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_233, /*hidden argument*/NULL);
		G_B46_0 = L_232;
		if ((((int32_t)L_234) > ((int32_t)0)))
		{
			G_B47_0 = L_232;
			goto IL_04dc;
		}
	}
	{
		G_B48_0 = (0.0f);
		G_B48_1 = G_B46_0;
		goto IL_04e8;
	}

IL_04dc:
	{
		String_t* L_235 = V_27;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_236;
		L_236 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float L_237;
		L_237 = Single_Parse_m2CEE3E81A3D2E04934160117DFA3729B8158F101(L_235, L_236, /*hidden argument*/NULL);
		G_B48_0 = L_237;
		G_B48_1 = G_B47_0;
	}

IL_04e8:
	{
		NullCheck(G_B48_1);
		G_B48_1->set_value_6(G_B48_0);
		// if (control.Contains("combobox"))
		String_t* L_238 = V_7;
		NullCheck(L_238);
		bool L_239;
		L_239 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_238, _stringLiteralE90C1239819816D8576FF43BCAF9A379E8A945E4, /*hidden argument*/NULL);
		if (!L_239)
		{
			goto IL_050f;
		}
	}
	{
		// controller.value = controller.value - 1;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_240 = V_8;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_241 = V_8;
		NullCheck(L_241);
		float L_242 = L_241->get_value_6();
		NullCheck(L_240);
		L_240->set_value_6(((float)il2cpp_codegen_subtract((float)L_242, (float)(1.0f))));
	}

IL_050f:
	{
		// locaChannelControllers.Add(controller);
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_243 = V_1;
		CsoundChannelController_t63EAADCAD8D965995D0B02D79F78F241C698DD4C * L_244 = V_8;
		NullCheck(L_243);
		List_1_Add_mE54AF0F12D36E6C373EAE66E716139EEFA6C724E(L_243, L_244, /*hidden argument*/List_1_Add_mE54AF0F12D36E6C373EAE66E716139EEFA6C724E_RuntimeMethod_var);
	}

IL_0517:
	{
		int32_t L_245 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)1));
	}

IL_051b:
	{
		// foreach (string line in fullCsdText)
		int32_t L_246 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_247 = V_2;
		NullCheck(L_247);
		if ((((int32_t)L_246) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_247)->max_length))))))
		{
			goto IL_0028;
		}
	}

IL_0524:
	{
		// return locaChannelControllers;
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_248 = V_1;
		return L_248;
	}
}
// System.Void CsoundUnity::SetInputSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetInputSample_m53D096C6AF162D3F2815A15CAFE2CED4C000D1B9 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method)
{
	{
		// csound.SetSpinSample(frame, channel, sample);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___frame0;
		int32_t L_2 = ___channel1;
		float L_3 = ___sample2;
		NullCheck(L_0);
		CsoundUnityBridge_SetSpinSample_m8922B400A3F879CB9EA2B5109BFB8F680E67F16F(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::AddInputSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_AddInputSample_m909F6009A3F46D90095F4A5A37949195E6CE09F0 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method)
{
	{
		// csound.AddSpinSample(frame, channel, sample);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___frame0;
		int32_t L_2 = ___channel1;
		float L_3 = ___sample2;
		NullCheck(L_0);
		CsoundUnityBridge_AddSpinSample_m0B4F8D97B7EA669F886226BBB0C9A29D0F9D3B4E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::ClearSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_ClearSpin_m99B2D636A5B7D663BA4C9F889E6ACBF7EAADB4CA (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50298BAA13081A68EAE8F150FEF3B4509A577316);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (csound != null)
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log("clear spin");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral50298BAA13081A68EAE8F150FEF3B4509A577316, /*hidden argument*/NULL);
		// csound.ClearSpin();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_1 = __this->get_csound_14();
		NullCheck(L_1);
		CsoundUnityBridge_ClearSpin_m5F4CA0961378F36A483248BF58E865DA225AAC6A(L_1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Single CsoundUnity::GetOutputSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_GetOutputSample_mCB2186ECD4F3EE65A9CAD1954EFFEB8402F43083 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___frame0, int32_t ___channel1, const RuntimeMethod* method)
{
	{
		// return csound.GetSpoutSample(frame, channel);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___frame0;
		int32_t L_2 = ___channel1;
		NullCheck(L_0);
		float L_3;
		L_3 = CsoundUnityBridge_GetSpoutSample_m7E113844AE40BDE0E3931151EF18B496CF1ED7D3(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single[] CsoundUnity::GetSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetSpin_mEF26A08156DEE0C8CFEAE2A3CAA486FB70C6B525 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetSpin();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1;
		L_1 = CsoundUnityBridge_GetSpin_m926C331DC5C28059CEC156D0274FABB00C2975E3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single[] CsoundUnity::GetSpout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetSpout_m7C4A6042E62EF6C5A95964E45E676D5EDE5EA9A8 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetSpout();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1;
		L_1 = CsoundUnityBridge_GetSpout_mAAF5918B8A113358DB977DEFCCA9F62A08EDD62B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CsoundUnity::SetChannel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetChannel_m0DE700BB4707DF873665A1431DE4B2964A09E9E2 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___channel0, float ___val1, const RuntimeMethod* method)
{
	{
		// csound.SetChannel(channel, val);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		String_t* L_1 = ___channel0;
		float L_2 = ___val1;
		NullCheck(L_0);
		CsoundUnityBridge_SetChannel_m4F75122437E23A56EB83421D98343AD48BA7AB11(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::SetStringChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetStringChannel_m36C6DD9FC14C1CF1EB388EF21A9C931F6C57E2D2 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___channel0, String_t* ___val1, const RuntimeMethod* method)
{
	{
		// csound.SetStringChannel(channel, val);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		String_t* L_1 = ___channel0;
		String_t* L_2 = ___val1;
		NullCheck(L_0);
		CsoundUnityBridge_SetStringChannel_m8ED2E5813389EEE773E5CDFB808E132A793F4193(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single CsoundUnity::GetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_GetChannel_m6FCBF270543E3697F40EB75E44371896AD66A6E3 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___channel0, const RuntimeMethod* method)
{
	{
		// return csound.GetChannel(channel);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		String_t* L_1 = ___channel0;
		NullCheck(L_0);
		float L_2;
		L_2 = CsoundUnityBridge_GetChannel_m65B6693EC6DAAC3389FE3598DCB45DC2CEF15CBD(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,CsoundUnityBridge/ChannelInfo> CsoundUnity::GetChannelList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnity_GetChannelList_m9D2D05946008273190078EE6AE7519206D599051 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetChannelList();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = CsoundUnityBridge_GetChannelList_m5F9926452C4481F8D88DCF2BF51E6FFD8FAF2AC6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single[] CsoundUnity::GetAudioChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetAudioChannel_m50D24F0B096AACBDC93F65AC846E54D681FE0D08 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___channel0, const RuntimeMethod* method)
{
	{
		// return csound.GetAudioChannel(channel);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		String_t* L_1 = ___channel0;
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2;
		L_2 = CsoundUnityBridge_GetAudioChannel_m3B9FAC9B46521AC81C43985F4F104B63395B244D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 CsoundUnity::CreateTable(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_CreateTable_mC4D965D67A5DEA30202897E8CC33C01FFBCBD5FC (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___tableNumber0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (samples.Length < 1) return -1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___samples1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		// if (samples.Length < 1) return -1;
		return (-1);
	}

IL_0008:
	{
		// var resTable = CreateTableInstrument(tableNumber, samples.Length);
		int32_t L_1 = ___tableNumber0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___samples1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CsoundUnity_CreateTableInstrument_m63BB69A8DCCE6D557F9CBF6BB47592AD1DA7D501(__this, L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (resTable != 0)
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0018:
	{
		// CopyTableIn(tableNumber, samples);
		int32_t L_5 = ___tableNumber0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___samples1;
		CsoundUnity_CopyTableIn_mCF53B0609636A3C4D455F99212FDBB364EE283E5(__this, L_5, L_6, /*hidden argument*/NULL);
		// return resTable;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 CsoundUnity::CreateTableInstrument(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_CreateTableInstrument_m63BB69A8DCCE6D557F9CBF6BB47592AD1DA7D501 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___tableNumber0, int32_t ___tableLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14C078415BDD4CA31DD984B72A6C3A0542B78A2D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string createTableInstrument = String.Format(@"gisampletable{0} ftgen {0}, 0, {1}, -7, 0, 0", tableNumber, -tableLength /** AudioSettings.outputSampleRate*/);
		int32_t L_0 = ___tableNumber0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___tableLength1;
		int32_t L_4 = ((-L_3));
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral14C078415BDD4CA31DD984B72A6C3A0542B78A2D, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// return CompileOrc(createTableInstrument);
		String_t* L_7 = V_0;
		int32_t L_8;
		L_8 = CsoundUnity_CompileOrc_mE0E0AF5F1E97AC4F026E61CAA8F0527E645047C5(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 CsoundUnity::GetTableLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_GetTableLength_mF9AB9B40B4F3030A073E1FE13D46A098EC1F0223 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, const RuntimeMethod* method)
{
	{
		// return csound.TableLength(table);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___table0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = CsoundUnityBridge_TableLength_m272AFB3934E6ED3A514B84F3B352EA15A80B3956(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single CsoundUnity::GetTableSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_GetTableSample_mD480044D5B150E62F24B2A0210A6A1E285018A68 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___tableNumber0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// return csound.GetTable(tableNumber, index);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___tableNumber0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		float L_3;
		L_3 = CsoundUnityBridge_GetTable_mA8B42333D5C513C9D4FEB880D0F3D5CBA6B24C9C(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 CsoundUnity::GetTable(System.Single[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_GetTable_mEB8227B6C0B10C90AAB443A23FD6AA74EB3978D8 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___tableValues0, int32_t ___numTable1, const RuntimeMethod* method)
{
	{
		// return csound.GetTable(out tableValues, numTable);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_1 = ___tableValues0;
		int32_t L_2 = ___numTable1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = CsoundUnityBridge_GetTable_m7633927992F2D6002FC00E796D6AFF4032B1BAF9(L_0, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 CsoundUnity::GetTableArgs(System.Single[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_GetTableArgs_m36A613FBA6531247F29D9B778ABA26B3D98FBBFD (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___args0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// return csound.GetTableArgs(out args, index);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_1 = ___args0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = CsoundUnityBridge_GetTableArgs_m1D890BCC2666FF41DF089386EA2C57117A5878BD(L_0, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void CsoundUnity::SetTable(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetTable_m73FFFCA9F79619BA465A7663E89B444B8B28E737 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	{
		// csound.SetTable(table, index, value);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___table0;
		int32_t L_2 = ___index1;
		float L_3 = ___value2;
		NullCheck(L_0);
		CsoundUnityBridge_SetTable_m4C011FCAB23A6422A9D392624B5EF1C57A884F5B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::CopyTableOut(System.Int32,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_CopyTableOut_m06EF6256B9217A465CEF797D47F575A5A9B11644 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___dest1, const RuntimeMethod* method)
{
	{
		// csound.TableCopyOut(table, out dest);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___table0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_2 = ___dest1;
		NullCheck(L_0);
		CsoundUnityBridge_TableCopyOut_m433B80E465FE6F2ABDA88D6048B94692A7520AA5(L_0, L_1, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::CopyTableOutAsync(System.Int32,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_CopyTableOutAsync_mDE915667A43BB68B8ADB47F6CF4495A32C2C4DB5 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___dest1, const RuntimeMethod* method)
{
	{
		// csound.TableCopyOutAsync(table, out dest);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___table0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_2 = ___dest1;
		NullCheck(L_0);
		CsoundUnityBridge_TableCopyOutAsync_mF43355AF8E7449D393EA170872D5C7AE71D0E526(L_0, L_1, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::CopyTableIn(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_CopyTableIn_mCF53B0609636A3C4D455F99212FDBB364EE283E5 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method)
{
	{
		// csound.TableCopyIn(table, source);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___table0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___source1;
		NullCheck(L_0);
		CsoundUnityBridge_TableCopyIn_m01FB76CB094DC5EAE5C511AF38CF0C4257D9BB50(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::CopyTableInAsync(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_CopyTableInAsync_m605A266A422217AB47A4CEAED22580D83ADBF84A (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method)
{
	{
		// csound.TableCopyInAsync(table, source);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___table0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___source1;
		NullCheck(L_0);
		CsoundUnityBridge_TableCopyInAsync_m46803198B17EE72339015DDAB341A9F61FEF43F4(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CsoundUnity::IsNamedGEN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnity_IsNamedGEN_m062B5B79CD97359B2B65BB63A83C1CB22CAB98ED (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		// return csound.IsNamedGEN(num);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___num0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = CsoundUnityBridge_IsNamedGEN_m5E2C5CB5A2207AD101A17C169AA1DABBC45E3E40(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void CsoundUnity::GetNamedGEN(System.Int32,System.String&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_GetNamedGEN_mF439E30AF34B416D6FE09B93646D56C06A5CECBA (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___num0, String_t** ___name1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		// csound.GetNamedGEN(num, out name, len);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		int32_t L_1 = ___num0;
		String_t** L_2 = ___name1;
		int32_t L_3 = ___len2;
		NullCheck(L_0);
		CsoundUnityBridge_GetNamedGEN_mFC381115988F0967E6BCD65DC1115EF356F298C0(L_0, L_1, (String_t**)L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Int32> CsoundUnity::GetNamedGens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnity_GetNamedGens_mA71A47940283F9CA03D22BB102C1D4D2818BF390 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetNamedGens();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = CsoundUnityBridge_GetNamedGens_m34E5A734C776A253E9137E29275F5D4FB81F14B5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CsoundUnity::SetYieldCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetYieldCallback_m3F83AC7337B576931710C5B207978A23FD6B0500 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	{
		// csound.SetYieldCallback(callback);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___callback0;
		NullCheck(L_0);
		CsoundUnityBridge_SetYieldCallback_mF7D909D14B0AA7F56BFA6ADAAE431257F6740274(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::AddSenseEventCallback(CsoundUnityBridge/Csound6SenseEventCallbackHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_AddSenseEventCallback_m28AE2988EF1BDF7416DADBEDF38F325184994326 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * ___callbackHandler0, const RuntimeMethod* method)
{
	{
		// csound.SenseEventsCallback += callbackHandler;//Csound_SenseEventsCallback;
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * L_1 = ___callbackHandler0;
		NullCheck(L_0);
		CsoundUnityBridge_add_SenseEventsCallback_mD02DBC21905802C0C206416375B17F9C30D82CCC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::RemoveSenseEventCallback(CsoundUnityBridge/Csound6SenseEventCallbackHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_RemoveSenseEventCallback_mE86C2AED3504AB40A1BD7225B1F9DC99556E1B6B (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * ___callbackHandler0, const RuntimeMethod* method)
{
	{
		// csound.SenseEventsCallback -= callbackHandler;
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * L_1 = ___callbackHandler0;
		NullCheck(L_0);
		CsoundUnityBridge_remove_SenseEventsCallback_mD4556E02DDB9C0DC6C6162D6121C9E7127BBD791(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// CsoundUnityBridge/CSOUND_PARAMS CsoundUnity::GetParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * CsoundUnity_GetParams_m18B2AD9E5D70F82512DC664368FDBCA7D629AE62 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetParams();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_1;
		L_1 = CsoundUnityBridge_GetParams_m23B88E12DAF608C79FF561D20E4E2412FFC7380C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CsoundUnity::SetParams(CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_SetParams_m9903E5F4FDD06AD7CFD000314456FEC2E4757069 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms0, const RuntimeMethod* method)
{
	{
		// csound.SetParams(parms);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_1 = ___parms0;
		NullCheck(L_0);
		CsoundUnityBridge_SetParams_mC2555EED792F9955688E235CEA44F0B20E7DBB6C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String CsoundUnity::GetEnv(CsoundUnity/EnvType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnity_GetEnv_m911F2A93FCB33B94958CEE89B2F7C5C7FD8837C3 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, int32_t ___envType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvType_tB0980C2CEC4555E8A6FD4395CE2F9057546AEAB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return csound.GetEnv(envType.ToString());
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		RuntimeObject * L_1 = Box(EnvType_tB0980C2CEC4555E8A6FD4395CE2F9057546AEAB2_il2cpp_TypeInfo_var, (&___envType0));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		___envType0 = *(int32_t*)UnBox(L_1);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = CsoundUnityBridge_GetEnv_mCD2EF1C8569DAEA53AFC262C990577E2C1A18D78(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>> CsoundUnity::GetOpcodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnity_GetOpcodeList_mE4C580E09A8ED396A9E89DFDB4B0FE59B2742065 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetOpcodeList();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = CsoundUnityBridge_GetOpcodeList_m540C2EE347ABBC26B2A87AEDB6EFF4D0C9CCAE49(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 CsoundUnity::GetNchnlsInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnity_GetNchnlsInputs_mE4B15B0908CF531D598A50622DBDFDC1853FCEB5 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetNchnlsInput();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = CsoundUnityBridge_GetNchnlsInput_m31373B81A44B17984B85B6CADF393AD4DCDF65CA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 CsoundUnity::GetNchnls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnity_GetNchnls_m401F56A7DDBE45F66054F05E79B132E214B63B2C (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetNchnls();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = CsoundUnityBridge_GetNchnls_mE5D19B9E98B77A6BD8BDC646E5B851FAE82A8CF4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CsoundUnity::Get0dbfs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_Get0dbfs_m0A4D6CD4F83FE607BF6A1B38D7B2808C1D06CC06 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.Get0dbfs();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		float L_1;
		L_1 = CsoundUnityBridge_Get0dbfs_m5CBA5CE962CC46A86A88CD0B35BF2C7E5DA773A3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 CsoundUnity::GetCurrentTimeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CsoundUnity_GetCurrentTimeSamples_mF2D392C68E0C3DD98610C72BC710EE79851EF9AA (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// return csound.GetCurrentTimeSamples();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = CsoundUnityBridge_GetCurrentTimeSamples_m03C3E545CDF88F36E862B7871512B41FC8039B59(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CsoundUnity::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnity_Remap_m12339D7B1590C6C24F2BF65CB0D0C2532E8B345D (float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const RuntimeMethod* method)
{
	{
		// float retValue = (value - from1) / (to1 - from1) * (to2 - from2) + from2;
		float L_0 = ___value0;
		float L_1 = ___from11;
		float L_2 = ___to12;
		float L_3 = ___from11;
		float L_4 = ___to24;
		float L_5 = ___from23;
		float L_6 = ___from23;
		// return Mathf.Clamp(retValue, from2, to2);
		float L_7 = ___from23;
		float L_8 = ___to24;
		float L_9;
		L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)))), (float)L_6)), L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single[] CsoundUnity::GetStereoSamples(System.String,CsoundUnity/SamplesOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetStereoSamples_m0D3279B14F1634A1BC67C9DF47859E0EBABE5F2B (String_t* ___source0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		// return GetSamples(source, origin, 0, true);
		String_t* L_0 = ___source0;
		int32_t L_1 = ___origin1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2;
		L_2 = CsoundUnity_GetSamples_m649FB644A0234998068ABCA633288CF0D27EF9B3(L_0, L_1, 0, (bool)1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single[] CsoundUnity::GetMonoSamples(System.String,CsoundUnity/SamplesOrigin,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetMonoSamples_mED67B2393653867A3542A4268B7128F5BB186C9F (String_t* ___source0, int32_t ___origin1, int32_t ___channelNumber2, const RuntimeMethod* method)
{
	{
		// return GetSamples(source, origin, channelNumber, true);
		String_t* L_0 = ___source0;
		int32_t L_1 = ___origin1;
		int32_t L_2 = ___channelNumber2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3;
		L_3 = CsoundUnity_GetSamples_m649FB644A0234998068ABCA633288CF0D27EF9B3(L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single[] CsoundUnity::GetSamples(System.String,CsoundUnity/SamplesOrigin,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnity_GetSamples_m649FB644A0234998068ABCA633288CF0D27EF9B3 (String_t* ___source0, int32_t ___origin1, int32_t ___channelNumber2, bool ___writeChannelData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// MYFLT[] res = new MYFLT[0];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_0;
		int32_t L_1 = ___origin1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_00ce;
			}
			case 2:
			{
				goto IL_00da;
			}
		}
	}
	{
		goto IL_00e4;
	}

IL_001e:
	{
		// var src = Resources.Load<AudioClip>(source);
		String_t* L_2 = ___source0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3;
		L_3 = Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1(L_2, /*hidden argument*/Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1_RuntimeMethod_var);
		V_1 = L_3;
		// if (src == null)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// res = null;
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
		// break;
		goto IL_00e4;
	}

IL_0035:
	{
		// var data = new float[src.samples * src.channels];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_6, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_8, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_9)));
		V_2 = L_10;
		// src.GetData(data, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_11, L_12, 0, /*hidden argument*/NULL);
		// if (writeChannelData)
		bool L_14 = ___writeChannelData3;
		if (!L_14)
		{
			goto IL_0094;
		}
	}
	{
		// res = new MYFLT[src.samples * src.channels + 1];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_15, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_17, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_18)), (int32_t)1)));
		V_0 = L_19;
		// res[0] = src.channels;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = V_0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_22)));
		// var s = 1;
		V_3 = 1;
		// for (var i = 0; i < data.Length; i++)
		V_4 = 0;
		goto IL_008b;
	}

IL_007a:
	{
		// res[s] = data[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = V_0;
		int32_t L_24 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = V_2;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (float)L_28);
		// s++;
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		// for (var i = 0; i < data.Length; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_008b:
	{
		// for (var i = 0; i < data.Length; i++)
		int32_t L_31 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_007a;
		}
	}
	{
		// }
		goto IL_00e4;
	}

IL_0094:
	{
		// var s = 0;
		V_5 = 0;
		// res = new MYFLT[src.samples];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_33, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_0 = L_35;
		// for (var i = 0; i < data.Length; i += src.channels, s++)
		V_6 = 0;
		goto IL_00c5;
	}

IL_00a8:
	{
		// res[s] = data[i + (channelNumber - 1)];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = V_0;
		int32_t L_37 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = V_2;
		int32_t L_39 = V_6;
		int32_t L_40 = ___channelNumber2;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1))));
		float L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (float)L_42);
		// for (var i = 0; i < data.Length; i += src.channels, s++)
		int32_t L_43 = V_6;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_44, /*hidden argument*/NULL);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_45));
		// for (var i = 0; i < data.Length; i += src.channels, s++)
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00c5:
	{
		// for (var i = 0; i < data.Length; i += src.channels, s++)
		int32_t L_47 = V_6;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_00a8;
		}
	}
	{
		// break;
		goto IL_00e4;
	}

IL_00ce:
	{
		// Debug.LogWarning("Not implemented yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A, /*hidden argument*/NULL);
		// break;
		goto IL_00e4;
	}

IL_00da:
	{
		// Debug.LogWarning("Not implemented yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		// return res;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_49 = V_0;
		return L_49;
	}
}
// System.Collections.IEnumerator CsoundUnity::GetSamples(System.String,CsoundUnity/SamplesOrigin,System.Action`1<System.Single[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnity_GetSamples_m3DBCE9317EFF164C9AF64931DDBCC696FC7530B8 (String_t* ___source0, int32_t ___origin1, Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * ___onSamplesLoaded2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * L_0 = (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 *)il2cpp_codegen_object_new(U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9_il2cpp_TypeInfo_var);
		U3CGetSamplesU3Ed__105__ctor_m2C3EC6F184D71C30A17139C81FF278736B5EABAE(L_0, 0, /*hidden argument*/NULL);
		U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * L_1 = L_0;
		String_t* L_2 = ___source0;
		NullCheck(L_1);
		L_1->set_source_3(L_2);
		U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * L_3 = L_1;
		int32_t L_4 = ___origin1;
		NullCheck(L_3);
		L_3->set_origin_2(L_4);
		U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * L_5 = L_3;
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_6 = ___onSamplesLoaded2;
		NullCheck(L_5);
		L_5->set_onSamplesLoaded_4(L_6);
		return L_5;
	}
}
// System.String CsoundUnity::GetCsoundFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnity_GetCsoundFile_m0691419CA40E32DCC2B70573127DA28778843074 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, String_t* ___csoundFileContents0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral020E70D0DFAE9BD5278E23A3EBC6F083E254D991);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C042DAC0A560664DA21AF35EFB194D9B3705FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30B3C9851B6C9F7B36BF9AA009959222E44FDBC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D8DD5EF45A347A03273AB119723DB94B146A55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB871F6066ACD97CFD681C83DC15C7FA994ED55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// Debug.Log("Csound file contents:");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral30B3C9851B6C9F7B36BF9AA009959222E44FDBC2, /*hidden argument*/NULL);
			// Debug.Log(csoundFileContents);
			String_t* L_0 = ___csoundFileContents0;
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
			// string filename = Application.persistentDataPath + "/csoundFile.csd";
			String_t* L_1;
			L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
			String_t* L_2;
			L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral8D8DD5EF45A347A03273AB119723DB94B146A55A, /*hidden argument*/NULL);
			V_0 = L_2;
			// Debug.Log("Writing to " + filename);
			String_t* L_3 = V_0;
			String_t* L_4;
			L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBAB871F6066ACD97CFD681C83DC15C7FA994ED55, L_3, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
			// if (!File.Exists(filename))
			String_t* L_5 = V_0;
			bool L_6;
			L_6 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_004d;
			}
		}

IL_0038:
		{
			// Debug.Log("File doesnt exist, creating it");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral020E70D0DFAE9BD5278E23A3EBC6F083E254D991, /*hidden argument*/NULL);
			// File.Create(filename).Close();
			String_t* L_7 = V_0;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_8;
			L_8 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_8);
		}

IL_004d:
		{
			// if (File.Exists(filename))
			String_t* L_9 = V_0;
			bool L_10;
			L_10 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005f;
			}
		}

IL_0055:
		{
			// Debug.Log("File has been created");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0C042DAC0A560664DA21AF35EFB194D9B3705FF1, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// File.WriteAllText(filename, csoundFileContents);
			String_t* L_11 = V_0;
			String_t* L_12 = ___csoundFileContents0;
			File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_11, L_12, /*hidden argument*/NULL);
			// return filename;
			String_t* L_13 = V_0;
			V_1 = L_13;
			goto IL_0088;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006a;
		}
		throw e;
	}

CATCH_006a:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError("Error writing to file: " + e.ToString());
		Exception_t * L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4A4DE85CB0F8977896A1D2190F3BFF897C792FA)), L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0082;
	} // end catch (depth: 1)

IL_0082:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0088:
	{
		// }
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.Void CsoundUnity::GetCsoundAudioFile(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_GetCsoundAudioFile_mC532154A4EB852A67050728921EEB89AAFDA68AE (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, String_t* ___filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// string name = Application.persistentDataPath + "/" + filename;
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1 = ___filename1;
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, /*hidden argument*/NULL);
		// File.Create(name).Close();
		String_t* L_3 = L_2;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_4;
		L_4 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_4);
		// File.WriteAllBytes(name, data);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_3, L_5, /*hidden argument*/NULL);
		// }
		goto IL_003b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError("Error writing to file: " + e.ToString());
		Exception_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4A4DE85CB0F8977896A1D2190F3BFF897C792FA)), L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003b;
	} // end catch (depth: 1)

IL_003b:
	{
		// }
		return;
	}
}
// System.Void CsoundUnity::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_OnAudioFilterRead_mDC33AE391835C58CA651DE53E861E4B94D413188 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	{
		// if (csound != null)
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ProcessBlock(data, channels);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___data0;
		int32_t L_2 = ___channels1;
		CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void CsoundUnity::ProcessBlock(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m00F3C1D6871DFCE5FE0EDC436E023F4CA3D9EB91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABB70B88C330EA65482ECFCDFA87677CD7901D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	uint32_t G_B21_0 = 0;
	{
		// if (compiledOk && initialized && !_quitting)
		bool L_0 = __this->get_compiledOk_29();
		if (!L_0)
		{
			goto IL_01f6;
		}
	}
	{
		bool L_1 = __this->get_initialized_25();
		if (!L_1)
		{
			goto IL_01f6;
		}
	}
	{
		bool L_2 = __this->get__quitting_36();
		if (L_2)
		{
			goto IL_01f6;
		}
	}
	{
		// for (int i = 0; i < samples.Length; i += numChannels, ksmpsIndex++)
		V_0 = 0;
		goto IL_01ed;
	}

IL_0028:
	{
		// for (uint channel = 0; channel < numChannels; channel++)
		V_1 = 0;
		goto IL_0156;
	}

IL_002f:
	{
		// if (mute == true)
		bool L_3 = __this->get_mute_7();
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// samples[i + channel] = 0.0f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___samples0;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_5)), (int64_t)((int64_t)((uint64_t)L_6))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_5)), (int64_t)((int64_t)((uint64_t)L_6)))))), (float)(0.0f));
		goto IL_0152;
	}

IL_0049:
	{
		// if ((ksmpsIndex >= GetKsmps()) && (GetKsmps() > 0))
		uint32_t L_7 = __this->get_ksmpsIndex_27();
		uint32_t L_8;
		L_8 = CsoundUnity_GetKsmps_m243C7D7A2136CABF157C176C9BEFC85465B84779(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) >= ((uint32_t)L_8))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_9;
		L_9 = CsoundUnity_GetKsmps_m243C7D7A2136CABF157C176C9BEFC85465B84779(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) > ((uint32_t)0))))
		{
			goto IL_00cd;
		}
	}
	{
		// var res = PerformKsmps();
		int32_t L_10;
		L_10 = CsoundUnity_PerformKsmps_m9A937E2C38A495339AD2B9DB2405EC771F7CA585(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		// performanceFinished = res == 1;
		int32_t L_11 = V_3;
		__this->set_performanceFinished_30((bool)((((int32_t)L_11) == ((int32_t)1))? 1 : 0));
		// ksmpsIndex = 0;
		__this->set_ksmpsIndex_27(0);
		// foreach (var chanName in availableAudioChannels)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12;
		L_12 = CsoundUnity_get_availableAudioChannels_m1286F5171116CA5F72E6F08BF7712E8C5C592B8A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_13;
		L_13 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_12, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_4 = L_13;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b4;
		}

IL_0087:
		{
			// foreach (var chanName in availableAudioChannels)
			String_t* L_14;
			L_14 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_5 = L_14;
			// if (!namedAudioChannelTempBufferDict.ContainsKey(chanName)) continue;
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_15 = __this->get_namedAudioChannelTempBufferDict_35();
			String_t* L_16 = V_5;
			NullCheck(L_15);
			bool L_17;
			L_17 = Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_00b4;
			}
		}

IL_009f:
		{
			// namedAudioChannelTempBufferDict[chanName] = GetAudioChannel(chanName);
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_18 = __this->get_namedAudioChannelTempBufferDict_35();
			String_t* L_19 = V_5;
			String_t* L_20 = V_5;
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21;
			L_21 = CsoundUnity_GetAudioChannel_m50D24F0B096AACBDC93F65AC846E54D681FE0D08(__this, L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			Dictionary_2_set_Item_m00F3C1D6871DFCE5FE0EDC436E023F4CA3D9EB91(L_18, L_19, L_21, /*hidden argument*/Dictionary_2_set_Item_m00F3C1D6871DFCE5FE0EDC436E023F4CA3D9EB91_RuntimeMethod_var);
		}

IL_00b4:
		{
			// foreach (var chanName in availableAudioChannels)
			bool L_22;
			L_22 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0087;
			}
		}

IL_00bd:
		{
			IL2CPP_LEAVE(0xCD, FINALLY_00bf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bf;
	}

FINALLY_00bf:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(191)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(191)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCD, IL_00cd)
	}

IL_00cd:
	{
		// if (processClipAudio)
		bool L_23 = __this->get_processClipAudio_8();
		if (!L_23)
		{
			goto IL_00f1;
		}
	}
	{
		// SetInputSample((int)ksmpsIndex, (int)channel, samples[i + channel] * zerdbfs);
		uint32_t L_24 = __this->get_ksmpsIndex_27();
		uint32_t L_25 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = ___samples0;
		int32_t L_27 = V_0;
		uint32_t L_28 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((uint64_t)L_28))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var);
		NullCheck(L_26);
		intptr_t L_29 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((uint64_t)L_28)))));
		float L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = __this->get_zerdbfs_28();
		CsoundUnity_SetInputSample_m53D096C6AF162D3F2815A15CAFE2CED4C000D1B9(__this, L_24, L_25, ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), /*hidden argument*/NULL);
	}

IL_00f1:
	{
		// var outputSampleChannel = channel < GetNchnls() ? channel : GetNchnls() - 1;
		uint32_t L_32 = V_1;
		uint32_t L_33;
		L_33 = CsoundUnity_GetNchnls_m401F56A7DDBE45F66054F05E79B132E214B63B2C(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) >= ((uint32_t)L_33))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_34;
		L_34 = CsoundUnity_GetNchnls_m401F56A7DDBE45F66054F05E79B132E214B63B2C(__this, /*hidden argument*/NULL);
		G_B21_0 = ((uint32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1))));
		goto IL_0105;
	}

IL_0104:
	{
		uint32_t L_35 = V_1;
		G_B21_0 = L_35;
	}

IL_0105:
	{
		V_2 = G_B21_0;
		// samples[i + channel] = (float)GetOutputSample((int)ksmpsIndex, (int)outputSampleChannel) / zerdbfs;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = ___samples0;
		int32_t L_37 = V_0;
		uint32_t L_38 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_37)), (int64_t)((int64_t)((uint64_t)L_38))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var);
		uint32_t L_39 = __this->get_ksmpsIndex_27();
		uint32_t L_40 = V_2;
		float L_41;
		L_41 = CsoundUnity_GetOutputSample_mCB2186ECD4F3EE65A9CAD1954EFFEB8402F43083(__this, L_39, L_40, /*hidden argument*/NULL);
		float L_42 = __this->get_zerdbfs_28();
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_37)), (int64_t)((int64_t)((uint64_t)L_38)))))), (float)((float)((float)((float)((float)L_41))/(float)L_42)));
		// if (loudVolumeWarning && (samples[i + channel] > loudWarningThreshold))
		bool L_43 = __this->get_loudVolumeWarning_9();
		if (!L_43)
		{
			goto IL_0152;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_44 = ___samples0;
		int32_t L_45 = V_0;
		uint32_t L_46 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_45)), (int64_t)((int64_t)((uint64_t)L_46))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var);
		NullCheck(L_44);
		intptr_t L_47 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_45)), (int64_t)((int64_t)((uint64_t)L_46)))));
		float L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		float L_49 = __this->get_loudWarningThreshold_10();
		if ((!(((float)L_48) > ((float)L_49))))
		{
			goto IL_0152;
		}
	}
	{
		// samples[i + channel] = 0.0f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = ___samples0;
		int32_t L_51 = V_0;
		uint32_t L_52 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_51)), (int64_t)((int64_t)((uint64_t)L_52))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnity_ProcessBlock_m369B08BDFF2D8962B000C85CACBBB4C00B3B2706_RuntimeMethod_var);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_51)), (int64_t)((int64_t)((uint64_t)L_52)))))), (float)(0.0f));
		// Debug.LogWarning("Volume is too high! Clearing output");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBABB70B88C330EA65482ECFCDFA87677CD7901D4, /*hidden argument*/NULL);
	}

IL_0152:
	{
		// for (uint channel = 0; channel < numChannels; channel++)
		uint32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0156:
	{
		// for (uint channel = 0; channel < numChannels; channel++)
		uint32_t L_54 = V_1;
		int32_t L_55 = ___numChannels1;
		if ((((int64_t)((int64_t)((uint64_t)L_54))) < ((int64_t)((int64_t)((int64_t)L_55)))))
		{
			goto IL_002f;
		}
	}
	{
		// if (!mute)
		bool L_56 = __this->get_mute_7();
		if (L_56)
		{
			goto IL_01db;
		}
	}
	{
		// foreach (var chanName in availableAudioChannels)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_57;
		L_57 = CsoundUnity_get_availableAudioChannels_m1286F5171116CA5F72E6F08BF7712E8C5C592B8A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_58;
		L_58 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_57, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_4 = L_58;
	}

IL_0174:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01c2;
		}

IL_0176:
		{
			// foreach (var chanName in availableAudioChannels)
			String_t* L_59;
			L_59 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_6 = L_59;
			// if (!namedAudioChannelDataDict.ContainsKey(chanName) || !namedAudioChannelTempBufferDict.ContainsKey(chanName)) continue;
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_60 = __this->get_namedAudioChannelDataDict_11();
			String_t* L_61 = V_6;
			NullCheck(L_60);
			bool L_62;
			L_62 = Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03(L_60, L_61, /*hidden argument*/Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
			if (!L_62)
			{
				goto IL_01c2;
			}
		}

IL_018e:
		{
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_63 = __this->get_namedAudioChannelTempBufferDict_35();
			String_t* L_64 = V_6;
			NullCheck(L_63);
			bool L_65;
			L_65 = Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03(L_63, L_64, /*hidden argument*/Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
			if (!L_65)
			{
				goto IL_01c2;
			}
		}

IL_019d:
		{
			// namedAudioChannelDataDict[chanName][i / numChannels] = namedAudioChannelTempBufferDict[chanName][ksmpsIndex];
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_66 = __this->get_namedAudioChannelDataDict_11();
			String_t* L_67 = V_6;
			NullCheck(L_66);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68;
			L_68 = Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD(L_66, L_67, /*hidden argument*/Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD_RuntimeMethod_var);
			int32_t L_69 = V_0;
			int32_t L_70 = ___numChannels1;
			Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_71 = __this->get_namedAudioChannelTempBufferDict_35();
			String_t* L_72 = V_6;
			NullCheck(L_71);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_73;
			L_73 = Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD(L_71, L_72, /*hidden argument*/Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD_RuntimeMethod_var);
			uint32_t L_74 = __this->get_ksmpsIndex_27();
			NullCheck(L_73);
			uint32_t L_75 = L_74;
			float L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
			NullCheck(L_68);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_69/(int32_t)L_70))), (float)L_76);
		}

IL_01c2:
		{
			// foreach (var chanName in availableAudioChannels)
			bool L_77;
			L_77 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_77)
			{
				goto IL_0176;
			}
		}

IL_01cb:
		{
			IL2CPP_LEAVE(0x1DB, FINALLY_01cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01cd;
	}

FINALLY_01cd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(461)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(461)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1DB, IL_01db)
	}

IL_01db:
	{
		// for (int i = 0; i < samples.Length; i += numChannels, ksmpsIndex++)
		int32_t L_78 = V_0;
		int32_t L_79 = ___numChannels1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)L_79));
		// for (int i = 0; i < samples.Length; i += numChannels, ksmpsIndex++)
		uint32_t L_80 = __this->get_ksmpsIndex_27();
		__this->set_ksmpsIndex_27(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1)));
	}

IL_01ed:
	{
		// for (int i = 0; i < samples.Length; i += numChannels, ksmpsIndex++)
		int32_t L_81 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_82 = ___samples0;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length))))))
		{
			goto IL_0028;
		}
	}

IL_01f6:
	{
		// }
		return;
	}
}
// System.Void CsoundUnity::LogCsoundMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_LogCsoundMessages_m54DEADA2DD405677E3E0D4C78DD5F4DAB8936830 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < csound.GetCsoundMessageCount(); i++)
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// print(csound.GetCsoundMessage());
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = CsoundUnityBridge_GetCsoundMessage_mAC6EC0F174655CAF466A026393A0CD9BB40A9EF6(L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// for (int i = 0; i < csound.GetCsoundMessageCount(); i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0018:
	{
		// for (int i = 0; i < csound.GetCsoundMessageCount(); i++)
		int32_t L_3 = V_0;
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_4 = __this->get_csound_14();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = CsoundUnityBridge_GetCsoundMessageCount_mD0A28B7666E2B1424EEB49FA800BD518D0C7040B(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CsoundUnity::Logging(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnity_Logging_m24AFC2F9275183BAAEAF901BC5C1270DAC253B48 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, float ___interval0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * L_0 = (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 *)il2cpp_codegen_object_new(U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563_il2cpp_TypeInfo_var);
		U3CLoggingU3Ed__113__ctor_m9E816D075B0888A8A22867130D4616BF4A76C88A(L_0, 0, /*hidden argument*/NULL);
		U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * L_2 = L_1;
		float L_3 = ___interval0;
		NullCheck(L_2);
		L_2->set_interval_3(L_3);
		return L_2;
	}
}
// System.Void CsoundUnity::CsoundReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_CsoundReset_mD074A0A63797E9BF310DE76005290056A3E387A4 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// csound.Reset();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		CsoundUnityBridge_Reset_m42A5667F636C90427180C28C343869761649F3A9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_Cleanup_m9B2265B10E98541015D8DBB76EB8FACC6912B48C (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// csound.Cleanup();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_0 = __this->get_csound_14();
		NullCheck(L_0);
		CsoundUnityBridge_Cleanup_mD2EDF853B9754312E7DB287AF3A7CE284D9A8725(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnity::ResetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_ResetFields_mC92FE858A653493ED73ED3A4B0F6FA249D2C2841 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBE4C636F807969CDF5361F3BD7AC6A01DA9D3126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._csoundFileName = null;
		__this->set__csoundFileName_17((String_t*)NULL);
		// this._csoundString = null;
		__this->set__csoundString_16((String_t*)NULL);
		// this._csoundFileGUID = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__csoundFileGUID_15(L_0);
		// this._channels.Clear();
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_1 = __this->get__channels_18();
		NullCheck(L_1);
		List_1_Clear_mBE4C636F807969CDF5361F3BD7AC6A01DA9D3126(L_1, /*hidden argument*/List_1_Clear_mBE4C636F807969CDF5361F3BD7AC6A01DA9D3126_RuntimeMethod_var);
		// this._availableAudioChannels.Clear();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get__availableAudioChannels_19();
		NullCheck(L_2);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_2, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// this.namedAudioChannelDataDict.Clear();
		Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_3 = __this->get_namedAudioChannelDataDict_11();
		NullCheck(L_3);
		Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E(L_3, /*hidden argument*/Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E_RuntimeMethod_var);
		// this.namedAudioChannelTempBufferDict.Clear();
		Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_4 = __this->get_namedAudioChannelTempBufferDict_35();
		NullCheck(L_4);
		Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E(L_4, /*hidden argument*/Dictionary_2_Clear_m18FE29176270E7778D06B2C527840FACAA76295E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CsoundUnity::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity_OnApplicationQuit_mEBA85B23AB7D23999EBEC1D2AC18B68DFBB2A172 (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// _quitting = true;
		__this->set__quitting_36((bool)1);
		// if (LoggingCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_LoggingCoroutine_32();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// StopCoroutine(LoggingCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get_LoggingCoroutine_32();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if (csound != null)
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_2 = __this->get_csound_14();
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// csound.OnApplicationQuit();
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_3 = __this->get_csound_14();
		NullCheck(L_3);
		CsoundUnityBridge_OnApplicationQuit_m76139059F640B31D0F9BE4A3D11D78ECD0D40666(L_3, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CsoundUnity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnity__ctor_m40043C513C37CC2B9C009841FBFDCB31ACC2AC1F (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool loudVolumeWarning = true;
		__this->set_loudVolumeWarning_9((bool)1);
		// public float loudWarningThreshold = 10f;
		__this->set_loudWarningThreshold_10((10.0f));
		// public readonly Dictionary<string, MYFLT[]> namedAudioChannelDataDict = new Dictionary<string, MYFLT[]>();
		Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_0 = (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *)il2cpp_codegen_object_new(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A(L_0, /*hidden argument*/Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A_RuntimeMethod_var);
		__this->set_namedAudioChannelDataDict_11(L_0);
		// [SerializeField] private List<CsoundChannelController> _channels = new List<CsoundChannelController>();
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_1 = (List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E *)il2cpp_codegen_object_new(List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E_il2cpp_TypeInfo_var);
		List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1(L_1, /*hidden argument*/List_1__ctor_m97F5D19E0A3DA29F258C907023E9689D885A83D1_RuntimeMethod_var);
		__this->set__channels_18(L_1);
		// [SerializeField] private List<string> _availableAudioChannels = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set__availableAudioChannels_19(L_2);
		// private uint ksmps = 32;
		__this->set_ksmps_26(((int32_t)32));
		// private float zerdbfs = 1;
		__this->set_zerdbfs_28((1.0f));
		// private Dictionary<string, MYFLT[]> namedAudioChannelTempBufferDict = new Dictionary<string, MYFLT[]>();
		Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_3 = (Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 *)il2cpp_codegen_object_new(Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A(L_3, /*hidden argument*/Dictionary_2__ctor_mFAA67AB6873DDF7AC53AECAA18609A6B5FB1656A_RuntimeMethod_var);
		__this->set_namedAudioChannelTempBufferDict_35(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge__ctor_m92C6FC26989C5906E48BF49980EFD8D7D6AFD850 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___csoundDir0, String_t* ___csdFile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m12C50E3E0C77225A40D2D8376CD7DDD3302DBDCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE83204B8085BFA77E9F30CB040FB6D84C0B8FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CCC12E5C23271CD6DD0BF9DB8F833EB7921A314);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D3011E77823B99443FA76816A347F4B0E0CD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB1A5487930B852F687C62A8F9B7B518E3CE63E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD657A53A9279F0D6459D387B917C7F7EB82B71C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD987F2F608F8882970D18E72818138712D3C0936);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF4FB275A923C640E2F8E4EFEBBA10978829DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE11208C54B443A7F26C518FD88FAF2B52668365D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * G_B2_0 = NULL;
	CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * G_B3_1 = NULL;
	{
		// private IDictionary<string, GCHandle> m_callbacks = new Dictionary<string, GCHandle>();  //a map of GCHandles pinned callbacks in memory: kept for unpinning during Dispose()
		Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382 * L_0 = (Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382 *)il2cpp_codegen_object_new(Dictionary_2_t972BA07F7BE189D957CE47D046088BE096734382_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m12C50E3E0C77225A40D2D8376CD7DDD3302DBDCF(L_0, /*hidden argument*/Dictionary_2__ctor_m12C50E3E0C77225A40D2D8376CD7DDD3302DBDCF_RuntimeMethod_var);
		__this->set_m_callbacks_3(L_0);
		// public CsoundUnityBridge(string csoundDir, string csdFile)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Debug.Log($"CsoundUnityBridge constructor from dir: {csoundDir}\ncsdFile: \n{csdFile}");
		String_t* L_1 = ___csoundDir0;
		String_t* L_2 = ___csdFile1;
		String_t* L_3;
		L_3 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralE11208C54B443A7F26C518FD88FAF2B52668365D, L_1, _stringLiteralDCCF4FB275A923C640E2F8E4EFEBBA10978829DB, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundSetGlobalEnv("OPCODE6DIR64", csoundDir);
		String_t* L_4 = ___csoundDir0;
		int32_t L_5;
		L_5 = NativeMethods_csoundSetGlobalEnv_mBA95F285391C45F22D17C2039C4412B90FFB6382(_stringLiteralD657A53A9279F0D6459D387B917C7F7EB82B71C9, L_4, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundInitialize(1);
		int32_t L_6;
		L_6 = NativeMethods_csoundInitialize_m4F12DA417DA8C1BE298914F64317A488796DF2E7(1, /*hidden argument*/NULL);
		// csound = Csound6.NativeMethods.csoundCreate(System.IntPtr.Zero);
		intptr_t L_7;
		L_7 = NativeMethods_csoundCreate_mC39E1767B19641012047AA494CC8CA0F60EC16F1((intptr_t)(0), /*hidden argument*/NULL);
		__this->set_csound_0((intptr_t)L_7);
		// if (csound == null)
		intptr_t L_8 = __this->get_csound_0();
		// AudioSettings.GetDSPBufferSize(out systemBufferSize, out systemNumBuffers);
		AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052((int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// Debug.Log($"System buffer size: {systemBufferSize}, buffer count: {systemNumBuffers}, samplerate: {AudioSettings.outputSampleRate}");
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		int32_t L_15;
		L_15 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral4CCC12E5C23271CD6DD0BF9DB8F833EB7921A314, L_11, L_14, L_17, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundSetHostImplementedAudioIO(csound, 1, 0);
		intptr_t L_19 = __this->get_csound_0();
		NativeMethods_csoundSetHostImplementedAudioIO_m3ADA09AF42CCBA1AFDD04F3D386793D50CF5919A((intptr_t)L_19, 1, 0, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundCreateMessageBuffer(csound, 0);
		intptr_t L_20 = __this->get_csound_0();
		NativeMethods_csoundCreateMessageBuffer_m20F2934E23F4C7A15D9EBC75D0EC89555941683B((intptr_t)L_20, 0, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundSetOption(csound, "-n");
		intptr_t L_21 = __this->get_csound_0();
		int32_t L_22;
		L_22 = NativeMethods_csoundSetOption_m963BFB8101356BBA6FE742A572613DF08DA10711((intptr_t)L_21, _stringLiteral82D3011E77823B99443FA76816A347F4B0E0CD8D, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundSetOption(csound, "-d");
		intptr_t L_23 = __this->get_csound_0();
		int32_t L_24;
		L_24 = NativeMethods_csoundSetOption_m963BFB8101356BBA6FE742A572613DF08DA10711((intptr_t)L_23, _stringLiteral8EB1A5487930B852F687C62A8F9B7B518E3CE63E, /*hidden argument*/NULL);
		// var parms = GetParams();
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_25;
		L_25 = CsoundUnityBridge_GetParams_m23B88E12DAF608C79FF561D20E4E2412FFC7380C(__this, /*hidden argument*/NULL);
		V_2 = L_25;
		// parms.control_rate_override = AudioSettings.outputSampleRate;
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_26 = V_2;
		int32_t L_27;
		L_27 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_control_rate_override_27(((double)((double)L_27)));
		// parms.sample_rate_override = AudioSettings.outputSampleRate;
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_28 = V_2;
		int32_t L_29;
		L_29 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_sample_rate_override_26(((double)((double)L_29)));
		// SetParams(parms);
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_30 = V_2;
		CsoundUnityBridge_SetParams_mC2555EED792F9955688E235CEA44F0B20E7DBB6C(__this, L_30, /*hidden argument*/NULL);
		// int ret = Csound6.NativeMethods.csoundCompileCsdText(csound, csdFile);
		intptr_t L_31 = __this->get_csound_0();
		String_t* L_32 = ___csdFile1;
		int32_t L_33;
		L_33 = NativeMethods_csoundCompileCsdText_m56601626080B0E1AACB7B4A461C5077A977DDBCF((intptr_t)L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		// Csound6.NativeMethods.csoundStart(csound);
		intptr_t L_34 = __this->get_csound_0();
		int32_t L_35;
		L_35 = NativeMethods_csoundStart_mFD990E0EA5A155DD64428FF9887059B0B3732E8D((intptr_t)L_34, /*hidden argument*/NULL);
		// var res = PerformKsmps();
		int32_t L_36;
		L_36 = CsoundUnityBridge_PerformKsmps_m3492EF5A53A00761CAF9DF2511119CFFA6FEE23E(__this, /*hidden argument*/NULL);
		V_4 = L_36;
		// Debug.Log($"PerformKsmps: {res}");
		int32_t L_37 = V_4;
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2AE83204B8085BFA77E9F30CB040FB6D84C0B8FA, L_39, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_40, /*hidden argument*/NULL);
		// compiledOk = ret == 0 ? true : false;
		int32_t L_41 = V_3;
		G_B1_0 = __this;
		if (!L_41)
		{
			G_B2_0 = __this;
			goto IL_011e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_011f;
	}

IL_011e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_011f:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_compiledOk_2((bool)G_B3_0);
		// Debug.Log($"CsoundCompile: {compiledOk}");
		bool L_42 = __this->get_compiledOk_2();
		bool L_43 = L_42;
		RuntimeObject * L_44 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD987F2F608F8882970D18E72818138712D3C0936, L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_45, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CsoundUnityBridge::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetVersion_mCA0A43310E74C944C2B3BA36A4160C782C082B3B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetVersion();
		int32_t L_0;
		L_0 = NativeMethods_csoundGetVersion_m1916CE467377B9E1346D896B016F80EF4D1DB00A(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 CsoundUnityBridge::GetAPIVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetAPIVersion_mF9B12160D9BBE707AAED7C6C04E49AA67D01537E (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetAPIVersion();
		int32_t L_0;
		L_0 = NativeMethods_csoundGetAPIVersion_m0E3F34FE8C857A1E9A46DFAAD34E30C7F2664702(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CsoundUnityBridge::StopCsound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_StopCsound_m6B85076696975C9CB6C944B708C0DFFC8F063B05 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6968F0F8ED994F2029FD9DA7E8888A9BB4A6BE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF6345805D8529C44416E8917784B16113A686444_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73CB209F178740EDD5A66AF18B4E8F82F83B1478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Csound6.NativeMethods.csoundStop(csound);
		intptr_t L_0 = __this->get_csound_0();
		NativeMethods_csoundStop_mBE598A65247D460CCB2EFBF508F7EF30ED06D7FD((intptr_t)L_0, /*hidden argument*/NULL);
		// if (m_callbacks != null)
		RuntimeObject* L_1 = __this->get_m_callbacks_3();
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// foreach (GCHandle gch in m_callbacks.Values) gch.Free();
		RuntimeObject* L_2 = __this->get_m_callbacks_3();
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Runtime.InteropServices.GCHandle>::get_Values() */, IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandle>::GetEnumerator() */, IEnumerable_1_tF6345805D8529C44416E8917784B16113A686444_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0026:
		{
			// foreach (GCHandle gch in m_callbacks.Values) gch.Free();
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_6;
			L_6 = InterfaceFuncInvoker0< GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandle>::get_Current() */, IEnumerator_1_t73CB209F178740EDD5A66AF18B4E8F82F83B1478_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			// foreach (GCHandle gch in m_callbacks.Values) gch.Free();
			GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
		}

IL_0034:
		{
			// foreach (GCHandle gch in m_callbacks.Values) gch.Free();
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0026;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			if (!L_9)
			{
				goto IL_0047;
			}
		}

IL_0041:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(62)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// m_callbacks.Clear();
		RuntimeObject* L_11 = __this->get_m_callbacks_3();
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Runtime.InteropServices.GCHandle>>::Clear() */, ICollection_1_t6968F0F8ED994F2029FD9DA7E8888A9BB4A6BE77_il2cpp_TypeInfo_var, L_11);
		// m_callbacks = null;
		__this->set_m_callbacks_3((RuntimeObject*)NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_OnApplicationQuit_m76139059F640B31D0F9BE4A3D11D78ECD0D40666 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundStop(csound);
		intptr_t L_0 = __this->get_csound_0();
		NativeMethods_csoundStop_mBE598A65247D460CCB2EFBF508F7EF30ED06D7FD((intptr_t)L_0, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundDestroyMessageBuffer(csound);
		intptr_t L_1 = __this->get_csound_0();
		NativeMethods_csoundDestroyMessageBuffer_m6262AAEB434CF4DA03973C8C0268B35CF7E8130D((intptr_t)L_1, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundDestroy(csound);
		intptr_t L_2 = __this->get_csound_0();
		NativeMethods_csoundDestroy_m50262DB0006AD56FA69022C7AE3B375F8008AEF0((intptr_t)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_Cleanup_mD2EDF853B9754312E7DB287AF3A7CE284D9A8725 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundCleanup(csound);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1;
		L_1 = NativeMethods_csoundCleanup_m7B2A8579A537A304C35B13F9E2CA91FD94EAA9E7((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_Reset_m42A5667F636C90427180C28C343869761649F3A9 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundReset(csound);
		intptr_t L_0 = __this->get_csound_0();
		NativeMethods_csoundReset_m783E7A47C983674F928C716F302322A72B8CABCC((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CsoundUnityBridge::CompiledWithoutError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CsoundUnityBridge_CompiledWithoutError_mBDC47E361F054835CF04FD5638FA75D3E8E87124 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return compiledOk;
		bool L_0 = __this->get_compiledOk_2();
		return L_0;
	}
}
// System.Int32 CsoundUnityBridge::CompileOrc(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_CompileOrc_mB14FFC8E627E9BD359473B92746687933F0AAC89 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___orchStr0, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundCompileOrc(csound, orchStr);
		intptr_t L_0 = __this->get_csound_0();
		String_t* L_1 = ___orchStr0;
		int32_t L_2;
		L_2 = NativeMethods_csoundCompileOrc_m2AD5762832317C1A62C250353840364B57BF6F29((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 CsoundUnityBridge::PerformKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_PerformKsmps_m3492EF5A53A00761CAF9DF2511119CFFA6FEE23E (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundPerformKsmps(csound);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1;
		L_1 = NativeMethods_csoundPerformKsmps_mCDAEB929EAD015D5C5307EC4210A2D62F9E7FDA4((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CsoundUnityBridge::Get0dbfs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_Get0dbfs_m5CBA5CE962CC46A86A88CD0B35BF2C7E5DA773A3 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGet0dBFS(csound);
		intptr_t L_0 = __this->get_csound_0();
		float L_1;
		L_1 = NativeMethods_csoundGet0dBFS_m5D763849777A77C54DBA0CD3E3687286400F0F41((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 CsoundUnityBridge::GetCurrentTimeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CsoundUnityBridge_GetCurrentTimeSamples_m03C3E545CDF88F36E862B7871512B41FC8039B59 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetCurrentTimeSamples(csound);
		intptr_t L_0 = __this->get_csound_0();
		int64_t L_1;
		L_1 = NativeMethods_csoundGetCurrentTimeSamples_m56D4E3888AEBC55BF3AD4A69DAEC5CC23E204F12((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CsoundUnityBridge::SendScoreEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SendScoreEvent_m5D13110D6A8DBF9E0F9E4EBAA21D4EFD7E19B3DF (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___scoreEvent0, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundInputMessage(csound, scoreEvent);
		intptr_t L_0 = __this->get_csound_0();
		String_t* L_1 = ___scoreEvent0;
		intptr_t L_2;
		L_2 = NativeMethods_csoundInputMessage_m9C264BD04D8258C2BD60DFFF4ECA4B02F4AF74E5((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::RewindScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_RewindScore_m466FAB401153CCAB90430585074CF6D3D2865EAA (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundRewindScore(csound);
		intptr_t L_0 = __this->get_csound_0();
		NativeMethods_csoundRewindScore_m11D7FF96A568093B8942828C76617B3F62717391((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::CsoundSetScoreOffsetSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_CsoundSetScoreOffsetSeconds_m8D060AD776D4D42BE9D77F5570E2D8320CC742ED (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundSetScoreOffsetSeconds(csound, value);
		intptr_t L_0 = __this->get_csound_0();
		float L_1 = ___value0;
		NativeMethods_csoundSetScoreOffsetSeconds_m9AA1ECDEE183A0303533517E38D08B0B00A935B7((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::SetChannel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetChannel_m4F75122437E23A56EB83421D98343AD48BA7AB11 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___channel0, float ___value1, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundSetControlChannel(csound, channel, value);
		intptr_t L_0 = __this->get_csound_0();
		String_t* L_1 = ___channel0;
		float L_2 = ___value1;
		intptr_t L_3;
		L_3 = NativeMethods_csoundSetControlChannel_m6E7F2206EB8C37FCB2C91B13D7EDDB057BFD0A7C((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::SetStringChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetStringChannel_m8ED2E5813389EEE773E5CDFB808E132A793F4193 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___channel0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundSetStringChannel(csound, channel, value);
		intptr_t L_0 = __this->get_csound_0();
		String_t* L_1 = ___channel0;
		String_t* L_2 = ___value1;
		intptr_t L_3;
		L_3 = NativeMethods_csoundSetStringChannel_m72944FBBCC87A502BC07DB3A8FDC18DC3C613759((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::SetAudioChannel(System.String,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetAudioChannel_m20DDC197A718C08617C9D77B7714BA5ED48A011B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___name0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___audio1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var bufsiz = GetKsmps();
		uint32_t L_0;
		L_0 = CsoundUnityBridge_GetKsmps_m2DFC2E523372FF7EFF5CD5400B9316A75DE5890A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// var buffer = Marshal.AllocHGlobal(sizeof(MYFLT) * (int)bufsiz);
		uint32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_1)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// Marshal.Copy(audio, 0, buffer, (int)Math.Min(audio.Length, bufsiz));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___audio1;
		intptr_t L_4 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___audio1;
		NullCheck(L_5);
		uint32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087(((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))), ((int64_t)((uint64_t)L_6)), /*hidden argument*/NULL);
		Marshal_Copy_m2D013820DD53B2B978A9759C619F1BB29850575F(L_3, 0, (intptr_t)L_4, ((int32_t)((int32_t)L_7)), /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundSetAudioChannel(csound, name, buffer);
		intptr_t L_8 = __this->get_csound_0();
		String_t* L_9 = ___name0;
		intptr_t L_10 = V_1;
		NativeMethods_csoundSetAudioChannel_m21AA27A48BB104C3926B2E890D57DE747ABDE001((intptr_t)L_8, L_9, (intptr_t)L_10, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(buffer);
		intptr_t L_11 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single[] CsoundUnityBridge::GetAudioChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnityBridge_GetAudioChannel_m3B9FAC9B46521AC81C43985F4F104B63395B244D (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	{
		// var bufsiz = GetKsmps();
		uint32_t L_0;
		L_0 = CsoundUnityBridge_GetKsmps_m2DFC2E523372FF7EFF5CD5400B9316A75DE5890A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// var buffer = Marshal.AllocHGlobal(sizeof(MYFLT) * (int)bufsiz);
		uint32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_1)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// MYFLT[] dest = new MYFLT[bufsiz];//include nchnls/nchnlss_i? no, not an output channel: just a single ksmps-sized buffer
		uint32_t L_3 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		// Csound6.NativeMethods.csoundGetAudioChannel(csound, name, buffer);
		intptr_t L_5 = __this->get_csound_0();
		String_t* L_6 = ___name0;
		intptr_t L_7 = V_1;
		NativeMethods_csoundGetAudioChannel_m7209003BC0E24A6BF4FEB2B7C5847089BFD41BA6((intptr_t)L_5, L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		// Marshal.Copy(buffer, dest, 0, dest.Length);
		intptr_t L_8 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_2;
		NullCheck(L_10);
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_8, L_9, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(buffer);
		intptr_t L_11 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_11, /*hidden argument*/NULL);
		// return dest;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = V_2;
		return L_12;
	}
}
// System.Void CsoundUnityBridge::RawSenseEventsCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_RawSenseEventsCallback_m24541F0AED618B8ED20109FD1289641A051636F2 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, intptr_t ___csound0, intptr_t ___userdata1, const RuntimeMethod* method)
{
	{
		// public void RawSenseEventsCallback(IntPtr csound, IntPtr userdata) { }
		return;
	}
}
// System.Void CsoundUnityBridge::add_SenseEventsCallback(CsoundUnityBridge/Csound6SenseEventCallbackHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_add_SenseEventsCallback_mD02DBC21905802C0C206416375B17F9C30D82CCC (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundUnityBridge_RawSenseEventsCallback_m24541F0AED618B8ED20109FD1289641A051636F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetSenseEventCallback(RawSenseEventsCallback);
		SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * L_0 = (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF *)il2cpp_codegen_object_new(SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF_il2cpp_TypeInfo_var);
		SenseEventCallbackProxy__ctor_m9E6BB1A948FF8CA7A051EF32C7EE6D8A8EA09401(L_0, __this, (intptr_t)((intptr_t)CsoundUnityBridge_RawSenseEventsCallback_m24541F0AED618B8ED20109FD1289641A051636F2_RuntimeMethod_var), /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = CsoundUnityBridge_SetSenseEventCallback_mE730C72D3C4465F5D8B76754318554584EF083AE(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::remove_SenseEventsCallback(CsoundUnityBridge/Csound6SenseEventCallbackHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_remove_SenseEventsCallback_mD4556E02DDB9C0DC6C6162D6121C9E7127BBD791 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Runtime.InteropServices.GCHandle CsoundUnityBridge::SetSenseEventCallback(csoundcsharp.Csound6/SenseEventCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  CsoundUnityBridge_SetSenseEventCallback_mE730C72D3C4465F5D8B76754318554584EF083AE (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * ___callback0, const RuntimeMethod* method)
{
	{
		// GCHandle gch = FreezeCallbackInHeap(callback);
		SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * L_0 = ___callback0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = CsoundUnityBridge_FreezeCallbackInHeap_m648987895F877CA02E46D8C411B14194978046C7(__this, L_0, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundRegisterSenseEventCallback(csound, callback);
		intptr_t L_2 = __this->get_csound_0();
		SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * L_3 = ___callback0;
		int32_t L_4;
		L_4 = NativeMethods_csoundRegisterSenseEventCallback_m787329E3D6561D246E083842A4729765E3014C49((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// return gch;
		return L_1;
	}
}
// System.Void CsoundUnityBridge::SetYieldCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetYieldCallback_mF7D909D14B0AA7F56BFA6ADAAE431257F6740274 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CSetYieldCallbackU3Eb__0_mA3B38F892EF32B316761CC2D37FBCE143EAECEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * V_0 = NULL;
	YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * L_0 = (U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_mE952A48345C502F782CE38F717F58EDEB7AF03EB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * L_1 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// Csound6.YieldCallback cb = new Csound6.YieldCallback((csd) =>
		// {
		//     // Debug.Log("callback " + (callback == null ? "is null" : "is not null"));
		//     if (callback == null) return -1;
		//     callback?.Invoke();
		//     return 1;
		// });
		U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * L_3 = V_0;
		YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * L_4 = (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E *)il2cpp_codegen_object_new(YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E_il2cpp_TypeInfo_var);
		YieldCallback__ctor_m84B7710A98C5C898C1D389F4CC04A11F01BA2E73(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass32_0_U3CSetYieldCallbackU3Eb__0_mA3B38F892EF32B316761CC2D37FBCE143EAECEED_RuntimeMethod_var), /*hidden argument*/NULL);
		V_1 = L_4;
		// var gchandle = FreezeCallbackInHeap(callback);
		U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * L_5 = V_0;
		NullCheck(L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5->get_callback_0();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_7;
		L_7 = CsoundUnityBridge_FreezeCallbackInHeap_m648987895F877CA02E46D8C411B14194978046C7(__this, L_6, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundSetYieldCallback(csound, cb);
		intptr_t L_8 = __this->get_csound_0();
		YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * L_9 = V_1;
		NativeMethods_csoundSetYieldCallback_m62D7BA3993E83E8E7978136CE8E539BC5FBD4851((intptr_t)L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Runtime.InteropServices.GCHandle CsoundUnityBridge::FreezeCallbackInHeap(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  CsoundUnityBridge_FreezeCallbackInHeap_m648987895F877CA02E46D8C411B14194978046C7 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, Delegate_t * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string name = callback.Method.GetHashCode().ToString();
		Delegate_t * L_0 = ___callback0;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!m_callbacks.ContainsKey(name)) m_callbacks.Add(name, GCHandle.Alloc(callback));
		RuntimeObject* L_4 = __this->get_m_callbacks_3();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Runtime.InteropServices.GCHandle>::ContainsKey(!0) */, IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		// if (!m_callbacks.ContainsKey(name)) m_callbacks.Add(name, GCHandle.Alloc(callback));
		RuntimeObject* L_7 = __this->get_m_callbacks_3();
		String_t* L_8 = V_0;
		Delegate_t * L_9 = ___callback0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_10;
		L_10 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Runtime.InteropServices.GCHandle>::Add(!0,!1) */, IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var, L_7, L_8, L_10);
	}

IL_0034:
	{
		// return m_callbacks[name];
		RuntimeObject* L_11 = __this->get_m_callbacks_3();
		String_t* L_12 = V_0;
		NullCheck(L_11);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_13;
		L_13 = InterfaceFuncInvoker1< GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 , String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Runtime.InteropServices.GCHandle>::get_Item(!0) */, IDictionary_2_t175CB020E4E8F82297D31EA96F29691453DD7A7D_il2cpp_TypeInfo_var, L_11, L_12);
		return L_13;
	}
}
// System.Int32 CsoundUnityBridge::TableLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_TableLength_m272AFB3934E6ED3A514B84F3B352EA15A80B3956 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundTableLength(csound, table);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2;
		L_2 = NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single CsoundUnityBridge::GetTable(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetTable_mA8B42333D5C513C9D4FEB880D0F3D5CBA6B24C9C (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundTableGet(csound, table, index);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2 = ___index1;
		float L_3;
		L_3 = NativeMethods_csoundTableGet_m9C5DBF614D6E13871FF2A347BDB4363169D9F79D((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void CsoundUnityBridge::SetTable(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetTable_m4C011FCAB23A6422A9D392624B5EF1C57A884F5B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundTableSet(csound, table, index, value);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2 = ___index1;
		float L_3 = ___value2;
		NativeMethods_csoundTableSet_mF270BCEA1EBB9AAB0D64191F3ABFA4604E55BF95((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::TableCopyOut(System.Int32,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyOut_m433B80E465FE6F2ABDA88D6048B94692A7520AA5 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___dest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int len = Csound6.NativeMethods.csoundTableLength(csound, table);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2;
		L_2 = NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (len < 1)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		// dest = null;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_4 = ___dest1;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		// return;
		return;
	}

IL_0015:
	{
		// dest = new MYFLT[len];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_5 = ___dest1;
		int32_t L_6 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_7);
		// IntPtr des = Marshal.AllocHGlobal(sizeof(MYFLT) * dest.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_8 = ___dest1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_8);
		NullCheck(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		// Csound6.NativeMethods.csoundTableCopyOut(csound, table, des);
		intptr_t L_11 = __this->get_csound_0();
		int32_t L_12 = ___table0;
		intptr_t L_13 = V_1;
		NativeMethods_csoundTableCopyOut_m192B5C74EF9EB100C223CD2BE615CE075EACE67B((intptr_t)L_11, L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		// Marshal.Copy(des, dest, 0, len);
		intptr_t L_14 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_15 = ___dest1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_15);
		int32_t L_17 = V_0;
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_14, L_16, 0, L_17, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(des);
		intptr_t L_18 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::TableCopyOutAsync(System.Int32,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyOutAsync_mF43355AF8E7449D393EA170872D5C7AE71D0E526 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___dest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int len = Csound6.NativeMethods.csoundTableLength(csound, table);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2;
		L_2 = NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (len < 1)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		// dest = null;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_4 = ___dest1;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		// return;
		return;
	}

IL_0015:
	{
		// dest = new MYFLT[len];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_5 = ___dest1;
		int32_t L_6 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_7);
		// IntPtr des = Marshal.AllocHGlobal(sizeof(MYFLT) * dest.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_8 = ___dest1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_8);
		NullCheck(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		// Csound6.NativeMethods.csoundTableCopyOutAsync(csound, table, des);
		intptr_t L_11 = __this->get_csound_0();
		int32_t L_12 = ___table0;
		intptr_t L_13 = V_1;
		NativeMethods_csoundTableCopyOutAsync_mB96CE207CC6BA17819A7350A99980A24FE4C5D90((intptr_t)L_11, L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		// Marshal.Copy(des, dest, 0, len);
		intptr_t L_14 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_15 = ___dest1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_15);
		int32_t L_17 = V_0;
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_14, L_16, 0, L_17, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(des);
		intptr_t L_18 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::TableCopyIn(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyIn_m01FB76CB094DC5EAE5C511AF38CF0C4257D9BB50 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var len = Csound6.NativeMethods.csoundTableLength(csound, table);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2;
		L_2 = NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (len < 1 || len < source.Length) return;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___source1;
		NullCheck(L_5);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// if (len < 1 || len < source.Length) return;
		return;
	}

IL_0018:
	{
		// IntPtr src = Marshal.AllocHGlobal(sizeof(MYFLT) * source.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___source1;
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_7;
		// Marshal.Copy(source, 0, src, source.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ___source1;
		intptr_t L_9 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___source1;
		NullCheck(L_10);
		Marshal_Copy_m2D013820DD53B2B978A9759C619F1BB29850575F(L_8, 0, (intptr_t)L_9, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundTableCopyIn(csound, table, src);
		intptr_t L_11 = __this->get_csound_0();
		int32_t L_12 = ___table0;
		intptr_t L_13 = V_1;
		NativeMethods_csoundTableCopyIn_mCD71FE5471E156A7C7CF8996C5CD09BDE16E7D21((intptr_t)L_11, L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(src);
		intptr_t L_14 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::TableCopyInAsync(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_TableCopyInAsync_m46803198B17EE72339015DDAB341A9F61FEF43F4 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___table0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var len = Csound6.NativeMethods.csoundTableLength(csound, table);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___table0;
		int32_t L_2;
		L_2 = NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (len < 1 || len < source.Length) return;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___source1;
		NullCheck(L_5);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// if (len < 1 || len < source.Length) return;
		return;
	}

IL_0018:
	{
		// IntPtr src = Marshal.AllocHGlobal(sizeof(MYFLT) * source.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___source1;
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_7;
		// Marshal.Copy(source, 0, src, source.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ___source1;
		intptr_t L_9 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___source1;
		NullCheck(L_10);
		Marshal_Copy_m2D013820DD53B2B978A9759C619F1BB29850575F(L_8, 0, (intptr_t)L_9, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundTableCopyInAsync(csound, table, src);
		intptr_t L_11 = __this->get_csound_0();
		int32_t L_12 = ___table0;
		intptr_t L_13 = V_1;
		NativeMethods_csoundTableCopyInAsync_mCC01AE2BE19AE64917CB91CE7B3E4F20AB47A50B((intptr_t)L_11, L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(src);
		intptr_t L_14 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CsoundUnityBridge::GetTable(System.Single[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetTable_m7633927992F2D6002FC00E796D6AFF4032B1BAF9 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___tableValues0, int32_t ___numTable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// int len = Csound6.NativeMethods.csoundTableLength(csound, numTable);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___numTable1;
		int32_t L_2;
		L_2 = NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (len < 1)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// tableValues = null;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_4 = ___tableValues0;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		// return -1;
		return (-1);
	}

IL_0016:
	{
		// IntPtr tablePtr = new IntPtr();
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		// tableValues = new MYFLT[len];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_5 = ___tableValues0;
		int32_t L_6 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_7);
		// int res = Csound6.NativeMethods.csoundGetTable(csound, out tablePtr, numTable);
		intptr_t L_8 = __this->get_csound_0();
		int32_t L_9 = ___numTable1;
		int32_t L_10;
		L_10 = NativeMethods_csoundGetTable_m8B3E25D3B2FD43E6F35C027D1296D7D6A67FEF57((intptr_t)L_8, (intptr_t*)(&V_1), L_9, /*hidden argument*/NULL);
		// if (res != -1)
		int32_t L_11 = L_10;
		G_B3_0 = L_11;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			G_B4_0 = L_11;
			goto IL_0044;
		}
	}
	{
		// Marshal.Copy(tablePtr, tableValues, 0, len);
		intptr_t L_12 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_13 = ___tableValues0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_13);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_12, L_14, 0, L_15, /*hidden argument*/NULL);
		G_B5_0 = G_B3_0;
		goto IL_0047;
	}

IL_0044:
	{
		// else tableValues = null;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_16 = ___tableValues0;
		*((RuntimeObject **)L_16) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)NULL);
		G_B5_0 = G_B4_0;
	}

IL_0047:
	{
		// GCHandle gc = GCHandle.FromIntPtr(tablePtr);
		intptr_t L_17 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_18;
		L_18 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// gc.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_2), /*hidden argument*/NULL);
		// return res;
		return G_B5_0;
	}
}
// System.Int32 CsoundUnityBridge::GetTableArgs(System.Single[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetTableArgs_m1D890BCC2666FF41DF089386EA2C57117A5878BD (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___args0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr addr = new IntPtr();
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		// int len = Csound6.NativeMethods.csoundGetTableArgs(csound, out addr, index);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___index1;
		int32_t L_2;
		L_2 = NativeMethods_csoundGetTableArgs_m05213248DF67D1CFA01D13CBADE4A692F4AB5560((intptr_t)L_0, (intptr_t*)(&V_0), L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// args = new MYFLT[len];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_3 = ___args0;
		int32_t L_4 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		// if (len != -1)
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}
	{
		// Marshal.Copy(addr, args, 0, len);
		intptr_t L_7 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_8 = ___args0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_8);
		int32_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_7, L_9, 0, L_10, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_002f:
	{
		// else args = null;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_11 = ___args0;
		*((RuntimeObject **)L_11) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)NULL);
	}

IL_0032:
	{
		// Marshal.FreeHGlobal(addr);
		intptr_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_12, /*hidden argument*/NULL);
		// return len;
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Int32 CsoundUnityBridge::IsNamedGEN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_IsNamedGEN_m5E2C5CB5A2207AD101A17C169AA1DABBC45E3E40 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundIsNamedGEN(csound, num);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___num0;
		int32_t L_2;
		L_2 = NativeMethods_csoundIsNamedGEN_m508B3CD25F95AD19D550E27D1D2016B8AC21A37A((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void CsoundUnityBridge::GetNamedGEN(System.Int32,System.String&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_GetNamedGEN_mFC381115988F0967E6BCD65DC1115EF356F298C0 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___num0, String_t** ___name1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundGetNamedGEN(csound, num, out name, len);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___num0;
		String_t** L_2 = ___name1;
		int32_t L_3 = ___len2;
		NativeMethods_csoundGetNamedGEN_m1B32016B5ED11CD511DE032EAD085051432714F7((intptr_t)L_0, L_1, (String_t**)L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Int32> CsoundUnityBridge::GetNamedGens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnityBridge_GetNamedGens_m34E5A734C776A253E9137E29275F5D4FB81F14B5 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF * V_2 = NULL;
	{
		// IDictionary<string, int> gens = new Dictionary<string, int>();
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_0 = (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *)il2cpp_codegen_object_new(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912(L_0, /*hidden argument*/Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		// IntPtr pNAMEDGEN = Csound6.NativeMethods.csoundGetNamedGens(csound);
		intptr_t L_1 = __this->get_csound_0();
		intptr_t L_2;
		L_2 = NativeMethods_csoundGetNamedGens_m438AA04E1327FF971A997F300BDADA95EF992CFB((intptr_t)L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		goto IL_0048;
	}

IL_0014:
	{
		// NamedGenProxy namedGen = (NamedGenProxy)Marshal.PtrToStructure(pNAMEDGEN, typeof(NamedGenProxy));
		intptr_t L_3 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_3, L_5, /*hidden argument*/NULL);
		V_2 = ((NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF *)CastclassClass((RuntimeObject*)L_6, NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_il2cpp_TypeInfo_var));
		// gens.Add(Marshal.PtrToStringAnsi(namedGen.name), namedGen.genum);
		RuntimeObject* L_7 = V_0;
		NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF * L_8 = V_2;
		NullCheck(L_8);
		intptr_t L_9 = L_8->get_name_0();
		String_t* L_10;
		L_10 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_9, /*hidden argument*/NULL);
		NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF * L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_genum_1();
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Add(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_7, L_10, L_12);
		// pNAMEDGEN = namedGen.next;
		NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF * L_13 = V_2;
		NullCheck(L_13);
		intptr_t L_14 = L_13->get_next_2();
		V_1 = (intptr_t)L_14;
	}

IL_0048:
	{
		// while (pNAMEDGEN != IntPtr.Zero)
		intptr_t L_15 = V_1;
		bool L_16;
		L_16 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_15, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0014;
		}
	}
	{
		// return gens;
		RuntimeObject* L_17 = V_0;
		return L_17;
	}
}
// System.Single CsoundUnityBridge::GetSr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetSr_m93F12085684EA62D2355A281E7430A309E82E046 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetSr(csound);
		intptr_t L_0 = __this->get_csound_0();
		float L_1;
		L_1 = NativeMethods_csoundGetSr_mCE3D4166633C56AEF3CD7EA369E36F28F368E733((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CsoundUnityBridge::GetKr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetKr_m0981FCD2B8EE25391A88B0FB54A6A33C6F9E81BC (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetKr(csound);
		intptr_t L_0 = __this->get_csound_0();
		float L_1;
		L_1 = NativeMethods_csoundGetKr_m793DD4FD8A2961CD84234E28A7678286E2D09E9A((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 CsoundUnityBridge::GetKsmps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnityBridge_GetKsmps_m2DFC2E523372FF7EFF5CD5400B9316A75DE5890A (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetKsmps(csound);
		intptr_t L_0 = __this->get_csound_0();
		uint32_t L_1;
		L_1 = NativeMethods_csoundGetKsmps_m5A342708D72F3371C8DABE2265074835FD5701CC((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CsoundUnityBridge::GetSpoutSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetSpoutSample_m7E113844AE40BDE0E3931151EF18B496CF1ED7D3 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___frame0, int32_t ___channel1, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetSpoutSample(csound, frame, channel);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___frame0;
		int32_t L_2 = ___channel1;
		float L_3;
		L_3 = NativeMethods_csoundGetSpoutSample_mBAAC67587670CB34F3C1A64233EBD938B8B27FB7((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void CsoundUnityBridge::AddSpinSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_AddSpinSample_m0B4F8D97B7EA669F886226BBB0C9A29D0F9D3B4E (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundAddSpinSample(csound, frame, channel, sample);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___frame0;
		int32_t L_2 = ___channel1;
		float L_3 = ___sample2;
		intptr_t L_4;
		L_4 = NativeMethods_csoundAddSpinSample_m0248E060DBA1573CC1CED0A33667908C1D0A0A44((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::SetSpinSample(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetSpinSample_m8922B400A3F879CB9EA2B5109BFB8F680E67F16F (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, int32_t ___frame0, int32_t ___channel1, float ___sample2, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundSetSpinSample(csound, frame, channel, sample);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1 = ___frame0;
		int32_t L_2 = ___channel1;
		float L_3 = ___sample2;
		NativeMethods_csoundSetSpinSample_m01868DF7A464BB85FF04A1019B57AE643AA9022F((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge::ClearSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_ClearSpin_m5F4CA0961378F36A483248BF58E865DA225AAC6A (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundClearSpin(csound);
		intptr_t L_0 = __this->get_csound_0();
		NativeMethods_csoundClearSpin_mA03F5CC506131658C9D5EF919AB8F04CF5C4F55A((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single[] CsoundUnityBridge::GetSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnityBridge_GetSpin_m926C331DC5C28059CEC156D0274FABB00C2975E3 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	{
		// var size = (Int32)Csound6.NativeMethods.csoundGetKsmps(csound) * (int)GetNchnlsInput();
		intptr_t L_0 = __this->get_csound_0();
		uint32_t L_1;
		L_1 = NativeMethods_csoundGetKsmps_m5A342708D72F3371C8DABE2265074835FD5701CC((intptr_t)L_0, /*hidden argument*/NULL);
		uint32_t L_2;
		L_2 = CsoundUnityBridge_GetNchnlsInput_m31373B81A44B17984B85B6CADF393AD4DCDF65CA(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2));
		// var spin = new MYFLT[size];
		int32_t L_3 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// var addr = Csound6.NativeMethods.csoundGetSpin(csound);
		intptr_t L_5 = __this->get_csound_0();
		intptr_t L_6;
		L_6 = NativeMethods_csoundGetSpin_m64DDBE5163E798A556960527646A2DF2367BC3D8((intptr_t)L_5, /*hidden argument*/NULL);
		// Marshal.Copy(addr, spin, 0, size);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = V_1;
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_6, L_7, 0, L_8, /*hidden argument*/NULL);
		// return spin;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = V_1;
		return L_9;
	}
}
// System.Single[] CsoundUnityBridge::GetSpout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* CsoundUnityBridge_GetSpout_mAAF5918B8A113358DB977DEFCCA9F62A08EDD62B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	{
		// var size = (Int32)Csound6.NativeMethods.csoundGetKsmps(csound) * (int)GetNchnls();
		intptr_t L_0 = __this->get_csound_0();
		uint32_t L_1;
		L_1 = NativeMethods_csoundGetKsmps_m5A342708D72F3371C8DABE2265074835FD5701CC((intptr_t)L_0, /*hidden argument*/NULL);
		uint32_t L_2;
		L_2 = CsoundUnityBridge_GetNchnls_mE5D19B9E98B77A6BD8BDC646E5B851FAE82A8CF4(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2));
		// var spout = new MYFLT[size];
		int32_t L_3 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// var addr = Csound6.NativeMethods.csoundGetSpout(csound);
		intptr_t L_5 = __this->get_csound_0();
		intptr_t L_6;
		L_6 = NativeMethods_csoundGetSpout_m0B980931D01C0D4F0F62B1CBDAA2A5FD4D52B7B3((intptr_t)L_5, /*hidden argument*/NULL);
		// Marshal.Copy(addr, spout, 0, size);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = V_1;
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_6, L_7, 0, L_8, /*hidden argument*/NULL);
		// return spout;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = V_1;
		return L_9;
	}
}
// System.Single CsoundUnityBridge::GetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CsoundUnityBridge_GetChannel_m65B6693EC6DAAC3389FE3598DCB45DC2CEF15CBD (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Csound6.NativeMethods.csoundGetControlChannel(csound, channel, IntPtr.Zero);
		intptr_t L_0 = __this->get_csound_0();
		String_t* L_1 = ___channel0;
		float L_2;
		L_2 = NativeMethods_csoundGetControlChannel_mDBBB70EA9A9AE361FC5F65A5CF7EBA9EC014E3C3((intptr_t)L_0, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 CsoundUnityBridge::GetNchnlsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnityBridge_GetNchnlsInput_m31373B81A44B17984B85B6CADF393AD4DCDF65CA (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetNchnlsInput(csound);
		intptr_t L_0 = __this->get_csound_0();
		uint32_t L_1;
		L_1 = NativeMethods_csoundGetNchnlsInput_mBB6CC7B823C5FC61A99E8A87417E445F7504D579((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 CsoundUnityBridge::GetNchnls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CsoundUnityBridge_GetNchnls_mE5D19B9E98B77A6BD8BDC646E5B851FAE82A8CF4 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetNchnlsInput(csound);
		intptr_t L_0 = __this->get_csound_0();
		uint32_t L_1;
		L_1 = NativeMethods_csoundGetNchnlsInput_mBB6CC7B823C5FC61A99E8A87417E445F7504D579((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 CsoundUnityBridge::GetCsoundMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CsoundUnityBridge_GetCsoundMessageCount_mD0A28B7666E2B1424EEB49FA800BD518D0C7040B (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return Csound6.NativeMethods.csoundGetMessageCnt(csound);
		intptr_t L_0 = __this->get_csound_0();
		int32_t L_1;
		L_1 = NativeMethods_csoundGetMessageCnt_mA35A9B63F94C87DAE3771B94EFDF20EE6CF88C1F((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String CsoundUnityBridge::GetCsoundMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_GetCsoundMessage_mAC6EC0F174655CAF466A026393A0CD9BB40A9EF6 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// string message = GetMessageText(Csound6.NativeMethods.csoundGetFirstMessage(csound));
		intptr_t L_0 = __this->get_csound_0();
		intptr_t L_1;
		L_1 = NativeMethods_csoundGetFirstMessage_m98CF7A9FB2059BD2DE00D1DD47888ACBD1E9CE0C((intptr_t)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = CsoundUnityBridge_GetMessageText_mAE4BD34CE808341E0828CEBA3A5F8B26586D34D2((intptr_t)L_1, /*hidden argument*/NULL);
		// Csound6.NativeMethods.csoundPopFirstMessage(csound);
		intptr_t L_3 = __this->get_csound_0();
		NativeMethods_csoundPopFirstMessage_m4F74F640DF657737F64BA36FC5A6D07C3FE79AF3((intptr_t)L_3, /*hidden argument*/NULL);
		// return message;
		return L_2;
	}
}
// System.String CsoundUnityBridge::GetMessageText(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_GetMessageText_mAE4BD34CE808341E0828CEBA3A5F8B26586D34D2 (intptr_t ___message0, const RuntimeMethod* method)
{
	{
		// return CharPtr2String(message);
		intptr_t L_0 = ___message0;
		String_t* L_1;
		L_1 = CsoundUnityBridge_CharPtr2String_mC3BBA7707669C3F28D2F187C85633B4FFBF7E4E2((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IList`1<CsoundUnityBridge/OpcodeArgumentTypes>> CsoundUnityBridge::GetOpcodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnityBridge_GetOpcodeList_m540C2EE347ABBC26B2A87AEDB6EFF4D0C9CCAE49 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0CCED619890C2AA337251D4A1AA917252B3D02B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAD1F34BDD6BE418C53C15AF3E5DA07DBD5F46BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAE75B547557D67F43631ACFA1EA0809215A09658_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_m958B5B246EB03176958590BA8E5DACEF2FD74523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mDFF077AFB1F91693AC83D3EBC896F2DCBDE373C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mA82B45C5BD1F87AD6CF5B8FEF45E2839CDF5AC07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_mB455C382DCBB0856EA7D739AE1DB1181709C2980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 * V_5 = NULL;
	String_t* V_6 = NULL;
	OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	{
		// var opcodes = new SortedDictionary<string, IList<OpcodeArgumentTypes>>();
		SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * L_0 = (SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 *)il2cpp_codegen_object_new(SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_mA82B45C5BD1F87AD6CF5B8FEF45E2839CDF5AC07(L_0, /*hidden argument*/SortedDictionary_2__ctor_mA82B45C5BD1F87AD6CF5B8FEF45E2839CDF5AC07_RuntimeMethod_var);
		V_0 = L_0;
		// IntPtr ppOpcodeList = IntPtr.Zero;
		V_1 = (intptr_t)(0);
		// int size = Csound6.NativeMethods.csoundNewOpcodeList(csound, out ppOpcodeList);
		intptr_t L_1 = __this->get_csound_0();
		int32_t L_2;
		L_2 = NativeMethods_csoundNewOpcodeList_mB2587202593A4B1CCE63E0F66DD3986A7D61BC47((intptr_t)L_1, (intptr_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_2;
		// if ((ppOpcodeList != IntPtr.Zero) && (size >= 0))
		intptr_t L_3 = V_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		// int proxySize = Marshal.SizeOf(typeof(OpcodeListProxy));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// for (int i = 0; i < size; i++)
		V_4 = 0;
		goto IL_00ea;
	}

IL_0049:
	{
		// OpcodeListProxy proxy = Marshal.PtrToStructure(ppOpcodeList + (i * proxySize), typeof(OpcodeListProxy)) as OpcodeListProxy;
		intptr_t L_9 = V_1;
		int32_t L_10 = V_4;
		int32_t L_11 = V_3;
		intptr_t L_12;
		L_12 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_15;
		L_15 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_12, L_14, /*hidden argument*/NULL);
		V_5 = ((OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 *)IsInstClass((RuntimeObject*)L_15, OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_il2cpp_TypeInfo_var));
		// string opname = Marshal.PtrToStringAnsi(proxy.opname);
		OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 * L_16 = V_5;
		NullCheck(L_16);
		intptr_t L_17 = L_16->get_opname_0();
		String_t* L_18;
		L_18 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		// OpcodeArgumentTypes opcode = new OpcodeArgumentTypes
		// {
		//     outypes = Marshal.PtrToStringAnsi(proxy.outtypes),
		//     intypes = Marshal.PtrToStringAnsi(proxy.intypes),
		//     flags = proxy.flags
		// };
		OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * L_19 = (OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 *)il2cpp_codegen_object_new(OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6_il2cpp_TypeInfo_var);
		OpcodeArgumentTypes__ctor_mFA21E87766997AFBDB6C971BA4D4E217715EF697(L_19, /*hidden argument*/NULL);
		OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * L_20 = L_19;
		OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 * L_21 = V_5;
		NullCheck(L_21);
		intptr_t L_22 = L_21->get_outtypes_1();
		String_t* L_23;
		L_23 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_outypes_0(L_23);
		OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * L_24 = L_20;
		OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 * L_25 = V_5;
		NullCheck(L_25);
		intptr_t L_26 = L_25->get_intypes_2();
		String_t* L_27;
		L_27 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_intypes_1(L_27);
		OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * L_28 = L_24;
		OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 * L_29 = V_5;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_flags_3();
		NullCheck(L_28);
		L_28->set_flags_2(L_30);
		V_7 = L_28;
		// if (!opcodes.ContainsKey(opname))
		SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * L_31 = V_0;
		String_t* L_32 = V_6;
		NullCheck(L_31);
		bool L_33;
		L_33 = SortedDictionary_2_ContainsKey_mDFF077AFB1F91693AC83D3EBC896F2DCBDE373C3(L_31, L_32, /*hidden argument*/SortedDictionary_2_ContainsKey_mDFF077AFB1F91693AC83D3EBC896F2DCBDE373C3_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_00d5;
		}
	}
	{
		// IList<OpcodeArgumentTypes> types = new List<OpcodeArgumentTypes>();
		List_1_tAE75B547557D67F43631ACFA1EA0809215A09658 * L_34 = (List_1_tAE75B547557D67F43631ACFA1EA0809215A09658 *)il2cpp_codegen_object_new(List_1_tAE75B547557D67F43631ACFA1EA0809215A09658_il2cpp_TypeInfo_var);
		List_1__ctor_mAD1F34BDD6BE418C53C15AF3E5DA07DBD5F46BD2(L_34, /*hidden argument*/List_1__ctor_mAD1F34BDD6BE418C53C15AF3E5DA07DBD5F46BD2_RuntimeMethod_var);
		V_8 = (RuntimeObject*)L_34;
		// types.Add(opcode);
		RuntimeObject* L_35 = V_8;
		OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * L_36 = V_7;
		NullCheck(L_35);
		InterfaceActionInvoker1< OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<CsoundUnityBridge/OpcodeArgumentTypes>::Add(!0) */, ICollection_1_t0CCED619890C2AA337251D4A1AA917252B3D02B3_il2cpp_TypeInfo_var, L_35, L_36);
		// opcodes.Add(opname, types);
		SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * L_37 = V_0;
		String_t* L_38 = V_6;
		RuntimeObject* L_39 = V_8;
		NullCheck(L_37);
		SortedDictionary_2_Add_m958B5B246EB03176958590BA8E5DACEF2FD74523(L_37, L_38, L_39, /*hidden argument*/SortedDictionary_2_Add_m958B5B246EB03176958590BA8E5DACEF2FD74523_RuntimeMethod_var);
		// }
		goto IL_00e4;
	}

IL_00d5:
	{
		// opcodes[opname].Add(opcode);
		SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * L_40 = V_0;
		String_t* L_41 = V_6;
		NullCheck(L_40);
		RuntimeObject* L_42;
		L_42 = SortedDictionary_2_get_Item_mB455C382DCBB0856EA7D739AE1DB1181709C2980(L_40, L_41, /*hidden argument*/SortedDictionary_2_get_Item_mB455C382DCBB0856EA7D739AE1DB1181709C2980_RuntimeMethod_var);
		OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * L_43 = V_7;
		NullCheck(L_42);
		InterfaceActionInvoker1< OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<CsoundUnityBridge/OpcodeArgumentTypes>::Add(!0) */, ICollection_1_t0CCED619890C2AA337251D4A1AA917252B3D02B3_il2cpp_TypeInfo_var, L_42, L_43);
	}

IL_00e4:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ea:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_45 = V_4;
		int32_t L_46 = V_2;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0049;
		}
	}
	{
		// Csound6.NativeMethods.csoundDisposeOpcodeList(csound, ppOpcodeList);
		intptr_t L_47 = __this->get_csound_0();
		intptr_t L_48 = V_1;
		NativeMethods_csoundDisposeOpcodeList_m24751428DFF0661F122D85FFB12321E2A84D5782((intptr_t)L_47, (intptr_t)L_48, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// return opcodes;
		SortedDictionary_2_tFA91CEF8E14BEA4B2C1E2F096517E3D9D4243F15 * L_49 = V_0;
		return L_49;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,CsoundUnityBridge/ChannelInfo> CsoundUnityBridge::GetChannelList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundUnityBridge_GetChannelList_m5F9926452C4481F8D88DCF2BF51E6FFD8FAF2AC6 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1E2EA5CCB7C6EA9E3DC9653CD72EA3492C29C001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m0707084E400A6EBCDDBEF7ED5DD6CC179969FCB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 * V_5 = NULL;
	String_t* V_6 = NULL;
	ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * V_7 = NULL;
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  V_8;
	memset((&V_8), 0, sizeof(V_8));
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * V_9 = NULL;
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * G_B5_0 = NULL;
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * G_B5_1 = NULL;
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * G_B4_0 = NULL;
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * G_B6_1 = NULL;
	ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * G_B6_2 = NULL;
	{
		// IDictionary<string, ChannelInfo> channels = new SortedDictionary<string, ChannelInfo>();
		SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB * L_0 = (SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB *)il2cpp_codegen_object_new(SortedDictionary_2_t9813E50A602F64688D8E111CD71B988FEC061BCB_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m0707084E400A6EBCDDBEF7ED5DD6CC179969FCB1(L_0, /*hidden argument*/SortedDictionary_2__ctor_m0707084E400A6EBCDDBEF7ED5DD6CC179969FCB1_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		// IntPtr ppChannels = IntPtr.Zero;
		V_1 = (intptr_t)(0);
		// int size = Csound6.NativeMethods.csoundListChannels(csound, out ppChannels);
		intptr_t L_1 = __this->get_csound_0();
		int32_t L_2;
		L_2 = NativeMethods_csoundListChannels_mAFD2C1491CD2BE5666E30628A68AB0229BFC39B7((intptr_t)L_1, (intptr_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_2;
		// if ((ppChannels != IntPtr.Zero) && (size >= 0))
		intptr_t L_3 = V_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0148;
		}
	}
	{
		// int proxySize = Marshal.SizeOf(typeof(ChannelInfoProxy));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// for (int i = 0; i < size; i++)
		V_4 = 0;
		goto IL_0134;
	}

IL_0049:
	{
		// var proxy = Marshal.PtrToStructure(ppChannels + (i * proxySize), typeof(ChannelInfoProxy)) as ChannelInfoProxy;
		intptr_t L_9 = V_1;
		int32_t L_10 = V_4;
		int32_t L_11 = V_3;
		intptr_t L_12;
		L_12 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_15;
		L_15 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_12, L_14, /*hidden argument*/NULL);
		V_5 = ((ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 *)IsInstClass((RuntimeObject*)L_15, ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_il2cpp_TypeInfo_var));
		// string chanName = Marshal.PtrToStringAnsi(proxy.name);
		ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 * L_16 = V_5;
		NullCheck(L_16);
		intptr_t L_17 = L_16->get_name_0();
		String_t* L_18;
		L_18 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		// ChannelInfo info = new ChannelInfo(chanName, (ChannelType)(proxy.type & 15), (ChannelDirection)(proxy.type >> 4));
		String_t* L_19 = V_6;
		ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 * L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_type_1();
		ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 * L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_type_1();
		ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * L_24 = (ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 *)il2cpp_codegen_object_new(ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_mD7C0E9940A33872B8E3C52D5392EFF9C8907AE45(L_24, L_19, ((int32_t)((int32_t)L_21&(int32_t)((int32_t)15))), ((int32_t)((int32_t)L_23>>(int32_t)4)), /*hidden argument*/NULL);
		V_7 = L_24;
		// var hintProxy = proxy.hints;
		ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 * L_25 = V_5;
		NullCheck(L_25);
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_26 = L_25->get_hints_2();
		V_8 = L_26;
		// var hints = new ChannelHints((ChannelBehavior)hintProxy.behav, hintProxy.dflt, hintProxy.min, hintProxy.max)
		// {
		//     x = hintProxy.x,
		//     y = hintProxy.y,
		//     height = hintProxy.height,
		//     width = hintProxy.width,
		//     attributes = (hintProxy.attributes != IntPtr.Zero) ? Marshal.PtrToStringAnsi(hintProxy.attributes) : null
		// };
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_27 = V_8;
		int32_t L_28 = L_27.get_behav_0();
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_29 = V_8;
		double L_30 = L_29.get_dflt_1();
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_31 = V_8;
		double L_32 = L_31.get_min_2();
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_33 = V_8;
		double L_34 = L_33.get_max_3();
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_35 = (ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 *)il2cpp_codegen_object_new(ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301_il2cpp_TypeInfo_var);
		ChannelHints__ctor_m3582AE794DDB3B700DDE400A2DC1DF73AA282FF8(L_35, L_28, L_30, L_32, L_34, /*hidden argument*/NULL);
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_36 = L_35;
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_37 = V_8;
		int32_t L_38 = L_37.get_x_4();
		NullCheck(L_36);
		L_36->set_x_4(L_38);
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_39 = L_36;
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_40 = V_8;
		int32_t L_41 = L_40.get_y_5();
		NullCheck(L_39);
		L_39->set_y_5(L_41);
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_42 = L_39;
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_43 = V_8;
		int32_t L_44 = L_43.get_height_7();
		NullCheck(L_42);
		L_42->set_height_7(L_44);
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_45 = L_42;
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_46 = V_8;
		int32_t L_47 = L_46.get_width_6();
		NullCheck(L_45);
		L_45->set_width_6(L_47);
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_48 = L_45;
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_49 = V_8;
		intptr_t L_50 = L_49.get_attributes_8();
		bool L_51;
		L_51 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_50, (intptr_t)(0), /*hidden argument*/NULL);
		G_B4_0 = L_48;
		G_B4_1 = L_48;
		if (L_51)
		{
			G_B5_0 = L_48;
			G_B5_1 = L_48;
			goto IL_0108;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0114;
	}

IL_0108:
	{
		ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  L_52 = V_8;
		intptr_t L_53 = L_52.get_attributes_8();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_54;
		L_54 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_53, /*hidden argument*/NULL);
		G_B6_0 = L_54;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0114:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_attributes_8(G_B6_0);
		V_9 = G_B6_2;
		// info.Hints = hints;
		ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * L_55 = V_7;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_56 = V_9;
		NullCheck(L_55);
		L_55->set_Hints_3(L_56);
		// channels.Add(chanName, info);
		RuntimeObject* L_57 = V_0;
		String_t* L_58 = V_6;
		ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * L_59 = V_7;
		NullCheck(L_57);
		InterfaceActionInvoker2< String_t*, ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,CsoundUnityBridge/ChannelInfo>::Add(!0,!1) */, IDictionary_2_t1E2EA5CCB7C6EA9E3DC9653CD72EA3492C29C001_il2cpp_TypeInfo_var, L_57, L_58, L_59);
		// for (int i = 0; i < size; i++)
		int32_t L_60 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0134:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_61 = V_4;
		int32_t L_62 = V_2;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0049;
		}
	}
	{
		// Csound6.NativeMethods.csoundDeleteChannelList(csound, ppChannels);
		intptr_t L_63 = __this->get_csound_0();
		intptr_t L_64 = V_1;
		NativeMethods_csoundDeleteChannelList_mBCE04F86005FF12D45E0A961F9D5364F9E55C4B1((intptr_t)L_63, (intptr_t)L_64, /*hidden argument*/NULL);
	}

IL_0148:
	{
		// return channels;
		RuntimeObject* L_65 = V_0;
		return L_65;
	}
}
// CsoundUnityBridge/CSOUND_PARAMS CsoundUnityBridge::GetParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * CsoundUnityBridge_GetParams_m23B88E12DAF608C79FF561D20E4E2412FFC7380C (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * V_0 = NULL;
	{
		// CSOUND_PARAMS oparms = new CSOUND_PARAMS();
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_0 = (CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F *)il2cpp_codegen_object_new(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_il2cpp_TypeInfo_var);
		CSOUND_PARAMS__ctor_mF71A292C6ECED74DF43FEB5BB9B1B7BDAF3476FA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Csound6.NativeMethods.csoundGetParams(csound, oparms);
		intptr_t L_1 = __this->get_csound_0();
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_2 = V_0;
		NativeMethods_csoundGetParams_m3EFF2DFC954864031946B1EAD84580564DC3D9F8((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// return oparms;
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_3 = V_0;
		return L_3;
	}
}
// System.Void CsoundUnityBridge::SetParams(CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityBridge_SetParams_mC2555EED792F9955688E235CEA44F0B20E7DBB6C (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms0, const RuntimeMethod* method)
{
	{
		// Csound6.NativeMethods.csoundSetParams(csound, parms);
		intptr_t L_0 = __this->get_csound_0();
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * L_1 = ___parms0;
		NativeMethods_csoundSetParams_m7E62F007B50FEAC8A6AE628796F3DC064BC5AE61((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String CsoundUnityBridge::GetEnv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_GetEnv_mCD2EF1C8569DAEA53AFC262C990577E2C1A18D78 (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// return CharPtr2String(Csound6.NativeMethods.csoundGetEnv(csound, key));
		intptr_t L_0 = __this->get_csound_0();
		String_t* L_1 = ___key0;
		intptr_t L_2;
		L_2 = NativeMethods_csoundGetEnv_m09E44AC78F0D4B452E874AC6C7F42282B48C737B((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = CsoundUnityBridge_CharPtr2String_mC3BBA7707669C3F28D2F187C85633B4FFBF7E4E2((intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String CsoundUnityBridge::CharPtr2String(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CsoundUnityBridge_CharPtr2String_mC3BBA7707669C3F28D2F187C85633B4FFBF7E4E2 (intptr_t ___pString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((pString != null) && (pString != IntPtr.Zero)) ? Marshal.PtrToStringAnsi(pString) : string.Empty;
		intptr_t L_0 = ___pString0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0013:
	{
		intptr_t L_3 = ___pString0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityChild::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_Awake_m68EFCCFC5709A882BEA3151B14E5B0BF6DE37981 (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514_m64DBB87317AF84D19DE4E9DEA40F85F602692C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral368C49E23882A8CED5E0873E8F402991BB857F28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A63104A159E9EBDA6DA089236073E13AC4D7F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (csoundUnityGameObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_csoundUnityGameObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// csoundUnity = csoundUnityGameObject.GetComponent<CsoundUnity>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_csoundUnityGameObject_4();
		NullCheck(L_2);
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_3;
		L_3 = GameObject_GetComponent_TisCsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514_m64DBB87317AF84D19DE4E9DEA40F85F602692C29(L_2, /*hidden argument*/GameObject_GetComponent_TisCsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514_m64DBB87317AF84D19DE4E9DEA40F85F602692C29_RuntimeMethod_var);
		__this->set_csoundUnity_13(L_3);
		// if (!csoundUnity)
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_4 = __this->get_csoundUnity_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogError("CsoundUnity was not found?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral368C49E23882A8CED5E0873E8F402991BB857F28, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// AudioSettings.GetDSPBufferSize(out bufferSize, out numBuffers);
		int32_t* L_6 = __this->get_address_of_bufferSize_9();
		int32_t* L_7 = __this->get_address_of_numBuffers_10();
		AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052((int32_t*)L_6, (int32_t*)L_7, /*hidden argument*/NULL);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8;
		L_8 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_12(L_8);
		// if (!audioSource)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_audioSource_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("AudioSource was not found?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralF0A63104A159E9EBDA6DA089236073E13AC4D7F9, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// audioSource.velocityUpdateMode = AudioVelocityUpdateMode.Fixed;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get_audioSource_12();
		NullCheck(L_11);
		AudioSource_set_velocityUpdateMode_m63201E0CAC0E5BC81B5F31F96F1796FD8A43982A(L_11, 1, /*hidden argument*/NULL);
		// audioSource.spatialBlend = 1.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_audioSource_12();
		NullCheck(L_12);
		AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC(L_12, (1.0f), /*hidden argument*/NULL);
		// if (selectedAudioChannelIndexByChannel == null) selectedAudioChannelIndexByChannel = new int[2];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_selectedAudioChannelIndexByChannel_6();
		if (L_13)
		{
			goto IL_0099;
		}
	}
	{
		// if (selectedAudioChannelIndexByChannel == null) selectedAudioChannelIndexByChannel = new int[2];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_selectedAudioChannelIndexByChannel_6(L_14);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void CsoundUnityChild::Init(CsoundUnity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_Init_mBF6B5EE42C5198BA9BBDD68799DDD3C83076DF3C (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * ___csound0, const RuntimeMethod* method)
{
	{
		// this.csoundUnity = csound;
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_0 = ___csound0;
		__this->set_csoundUnity_13(L_0);
		// this.csoundUnityGameObject = csound.gameObject;
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_1 = ___csound0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		__this->set_csoundUnityGameObject_4(L_2);
		// zerodbfs = csoundUnity.Get0dbfs();
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_3 = __this->get_csoundUnity_13();
		NullCheck(L_3);
		float L_4;
		L_4 = CsoundUnity_Get0dbfs_m0A4D6CD4F83FE607BF6A1B38D7B2808C1D06CC06(L_3, /*hidden argument*/NULL);
		__this->set_zerodbfs_11(L_4);
		// }
		return;
	}
}
// System.Void CsoundUnityChild::SetAudioChannel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_SetAudioChannel_m93E5B57317EF429F96765021E189DB19297D46CB (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, int32_t ___channel0, int32_t ___audioChannel1, const RuntimeMethod* method)
{
	{
		// selectedAudioChannelIndexByChannel[channel] = audioChannel;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_selectedAudioChannelIndexByChannel_6();
		int32_t L_1 = ___channel0;
		int32_t L_2 = ___audioChannel1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_2);
		// }
		return;
	}
}
// System.Void CsoundUnityChild::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_Start_m20783C177838601D79419CE5ADAE3EA9561132B9 (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE89AB76DCBBC9B3561BFEFC9C3F9001F8366E775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var chan = 0; chan < (int)AudioChannelsSetting; chan++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// namedAudioChannelData.Add(new MYFLT[bufferSize]);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_0 = __this->get_namedAudioChannelData_8();
		int32_t L_1 = __this->get_bufferSize_9();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_1);
		NullCheck(L_0);
		List_1_Add_mE89AB76DCBBC9B3561BFEFC9C3F9001F8366E775(L_0, L_2, /*hidden argument*/List_1_Add_mE89AB76DCBBC9B3561BFEFC9C3F9001F8366E775_RuntimeMethod_var);
		// for (var chan = 0; chan < (int)AudioChannelsSetting; chan++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001e:
	{
		// for (var chan = 0; chan < (int)AudioChannelsSetting; chan++)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_AudioChannelsSetting_5();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// if (csoundUnity) zerodbfs = csoundUnity.Get0dbfs();
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_6 = __this->get_csoundUnity_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// if (csoundUnity) zerodbfs = csoundUnity.Get0dbfs();
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_8 = __this->get_csoundUnity_13();
		NullCheck(L_8);
		float L_9;
		L_9 = CsoundUnity_Get0dbfs_m0A4D6CD4F83FE607BF6A1B38D7B2808C1D06CC06(L_8, /*hidden argument*/NULL);
		__this->set_zerodbfs_11(L_9);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void CsoundUnityChild::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_OnAudioFilterRead_m77F7481B4A591EEEE5BC0861C47BDF2C42BC62EA (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (csoundUnity != null)
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_0 = __this->get_csoundUnity_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// ProcessBlock(data, channels);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		int32_t L_3 = ___channels1;
		CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8(__this, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void CsoundUnityChild::ProcessBlock(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8 (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m219AAE29A066F48A86F2454DCD12C07825DF88DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (availableAudioChannels.Count < 1)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_availableAudioChannels_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_0, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// for (int i = 0; i < (int)AudioChannelsSetting; i++)
		V_0 = 0;
		goto IL_0063;
	}

IL_0013:
	{
		// var chanToUse = availableAudioChannels[selectedAudioChannelIndexByChannel[i]];
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_availableAudioChannels_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = __this->get_selectedAudioChannelIndexByChannel_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		String_t* L_7;
		L_7 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_2, L_6, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_1 = L_7;
		// if (string.IsNullOrWhiteSpace(chanToUse)) continue;
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		// if (!csoundUnity.namedAudioChannelDataDict.ContainsKey(chanToUse)) continue;
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_10 = __this->get_csoundUnity_13();
		NullCheck(L_10);
		Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_11 = L_10->get_namedAudioChannelDataDict_11();
		String_t* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03(L_11, L_12, /*hidden argument*/Dictionary_2_ContainsKey_m617B6A09DCD8235155CA21B6124FDA8C705F4A03_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005f;
		}
	}
	{
		// namedAudioChannelData[i] = csoundUnity.namedAudioChannelDataDict[chanToUse];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_14 = __this->get_namedAudioChannelData_8();
		int32_t L_15 = V_0;
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_16 = __this->get_csoundUnity_13();
		NullCheck(L_16);
		Dictionary_2_t2F3B1C8B2F21A726DA02122338663BBD155B4131 * L_17 = L_16->get_namedAudioChannelDataDict_11();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19;
		L_19 = Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_m9AB371ACF43A0A1957A38EECE9A0A5684A9EA2AD_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_set_Item_m219AAE29A066F48A86F2454DCD12C07825DF88DC(L_14, L_15, L_19, /*hidden argument*/List_1_set_Item_m219AAE29A066F48A86F2454DCD12C07825DF88DC_RuntimeMethod_var);
	}

IL_005f:
	{
		// for (int i = 0; i < (int)AudioChannelsSetting; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0063:
	{
		// for (int i = 0; i < (int)AudioChannelsSetting; i++)
		int32_t L_21 = V_0;
		int32_t L_22 = __this->get_AudioChannelsSetting_5();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0013;
		}
	}
	{
		// for (int i = 0, sampleIndex = 0; i < samples.Length; i += numChannels, sampleIndex++)
		V_2 = 0;
		// for (int i = 0, sampleIndex = 0; i < samples.Length; i += numChannels, sampleIndex++)
		V_3 = 0;
		goto IL_00e7;
	}

IL_0072:
	{
		// for (uint channel = 0; channel < numChannels; channel++)
		V_4 = 0;
		goto IL_00d8;
	}

IL_0077:
	{
		// switch (AudioChannelsSetting)
		int32_t L_23 = __this->get_AudioChannelsSetting_5();
		V_5 = L_23;
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_00d2;
	}

IL_008b:
	{
		// samples[i + channel] = (float)(namedAudioChannelData[0][sampleIndex] / zerodbfs * 0.5f);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = ___samples0;
		int32_t L_27 = V_2;
		uint32_t L_28 = V_4;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((uint64_t)L_28))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8_RuntimeMethod_var);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_29 = __this->get_namedAudioChannelData_8();
		NullCheck(L_29);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30;
		L_30 = List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_inline(L_29, 0, /*hidden argument*/List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_RuntimeMethod_var);
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		float L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		float L_34 = __this->get_zerodbfs_11();
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((uint64_t)L_28)))))), (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_33/(float)L_34)), (float)(0.5f))))));
		// break;
		goto IL_00d2;
	}

IL_00b2:
	{
		// samples[i + channel] = (float)(namedAudioChannelData[(int)channel][sampleIndex] / zerodbfs);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = ___samples0;
		int32_t L_36 = V_2;
		uint32_t L_37 = V_4;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_36)), (int64_t)((int64_t)((uint64_t)L_37))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CsoundUnityChild_ProcessBlock_m8F0BD0D88E9937BC30B7C87CDD53B1E27AD567E8_RuntimeMethod_var);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_38 = __this->get_namedAudioChannelData_8();
		uint32_t L_39 = V_4;
		NullCheck(L_38);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40;
		L_40 = List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m82F5CD8DE0174CD749A1C120B0F4A341B0567EF0_RuntimeMethod_var);
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		float L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		float L_44 = __this->get_zerodbfs_11();
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_36)), (int64_t)((int64_t)((uint64_t)L_37)))))), (float)((float)((float)((float)((float)L_43/(float)L_44)))));
	}

IL_00d2:
	{
		// for (uint channel = 0; channel < numChannels; channel++)
		uint32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00d8:
	{
		// for (uint channel = 0; channel < numChannels; channel++)
		uint32_t L_46 = V_4;
		int32_t L_47 = ___numChannels1;
		if ((((int64_t)((int64_t)((uint64_t)L_46))) < ((int64_t)((int64_t)((int64_t)L_47)))))
		{
			goto IL_0077;
		}
	}
	{
		// for (int i = 0, sampleIndex = 0; i < samples.Length; i += numChannels, sampleIndex++)
		int32_t L_48 = V_2;
		int32_t L_49 = ___numChannels1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_49));
		// for (int i = 0, sampleIndex = 0; i < samples.Length; i += numChannels, sampleIndex++)
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00e7:
	{
		// for (int i = 0, sampleIndex = 0; i < samples.Length; i += numChannels, sampleIndex++)
		int32_t L_51 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = ___samples0;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_0072;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CsoundUnityChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundUnityChild__ctor_m76ADA975365A63B3C505555544E945F52A86DAA7 (CsoundUnityChild_t60510EBD30439324BBDB84C5F444B76A304B5D8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioChannels AudioChannelsSetting = AudioChannels.MONO;
		__this->set_AudioChannelsSetting_5(1);
		// public List<MYFLT[]> namedAudioChannelData = new List<MYFLT[]>();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_0 = (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *)il2cpp_codegen_object_new(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var);
		List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64(L_0, /*hidden argument*/List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var);
		__this->set_namedAudioChannelData_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA (FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA * __this, intptr_t ___csound0, String_t* ___pathname1, int32_t ___csFileType2, int32_t ___writing3, int32_t ___temporary4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___pathname1' to native representation
	char* ____pathname1_marshaled = NULL;
	____pathname1_marshaled = il2cpp_codegen_marshal_string(___pathname1);

	// Native function invocation
	il2cppPInvokeFunc(___csound0, ____pathname1_marshaled, ___csFileType2, ___writing3, ___temporary4);

	// Marshaling cleanup of parameter '___pathname1' native representation
	il2cpp_codegen_marshal_free(____pathname1_marshaled);
	____pathname1_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/FileOpenCallbackProxy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenCallbackProxy__ctor_mD4DA8013F42BF3CE3C4EF39F0B39723AB0FE7CD9 (FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void csoundcsharp.Csound6/FileOpenCallbackProxy::Invoke(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenCallbackProxy_Invoke_m5483CFAB3D4C936276C293920333B794A06054F9 (FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA * __this, intptr_t ___csound0, String_t* ___pathname1, int32_t ___csFileType2, int32_t ___writing3, int32_t ___temporary4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< intptr_t, String_t*, int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4);
					else
						GenericVirtActionInvoker5< intptr_t, String_t*, int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< intptr_t, String_t*, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4);
					else
						VirtActionInvoker5< intptr_t, String_t*, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, ___pathname1, ___csFileType2, ___writing3, ___temporary4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult csoundcsharp.Csound6/FileOpenCallbackProxy::BeginInvoke(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenCallbackProxy_BeginInvoke_m5D62CE0A43CCB60E03696F419454BF4B1CC5DE0F (FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA * __this, intptr_t ___csound0, String_t* ___pathname1, int32_t ___csFileType2, int32_t ___writing3, int32_t ___temporary4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___csound0);
	__d_args[1] = ___pathname1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___csFileType2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___writing3);
	__d_args[4] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___temporary4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void csoundcsharp.Csound6/FileOpenCallbackProxy::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenCallbackProxy_EndInvoke_mB313A439B910E77599057B95AD909F357133E69B (FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C (MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * __this, intptr_t ___csound0, int32_t ___attr1, String_t* ___format2, intptr_t ___valist3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___format2' to native representation
	char* ____format2_marshaled = NULL;
	____format2_marshaled = il2cpp_codegen_marshal_string(___format2);

	// Native function invocation
	il2cppPInvokeFunc(___csound0, ___attr1, ____format2_marshaled, ___valist3);

	// Marshaling cleanup of parameter '___format2' native representation
	il2cpp_codegen_marshal_free(____format2_marshaled);
	____format2_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/MessageCallbackProxy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageCallbackProxy__ctor_m85A0A5D6A8851E51EE08C9BAFCD0750DDDAC9564 (MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void csoundcsharp.Csound6/MessageCallbackProxy::Invoke(System.IntPtr,System.Int32,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageCallbackProxy_Invoke_m7AF004A76A8F16250AA90C36D79CE20BFA5220AE (MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * __this, intptr_t ___csound0, int32_t ___attr1, String_t* ___format2, intptr_t ___valist3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___csound0, ___attr1, ___format2, ___valist3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, ___attr1, ___format2, ___valist3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___csound0, ___attr1, ___format2, ___valist3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___csound0, ___attr1, ___format2, ___valist3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___csound0, ___attr1, ___format2, ___valist3);
					else
						VirtActionInvoker4< intptr_t, int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___csound0, ___attr1, ___format2, ___valist3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, ___attr1, ___format2, ___valist3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult csoundcsharp.Csound6/MessageCallbackProxy::BeginInvoke(System.IntPtr,System.Int32,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageCallbackProxy_BeginInvoke_mC191C8D7ECD24CC606E8F94B9754F5162410329B (MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * __this, intptr_t ___csound0, int32_t ___attr1, String_t* ___format2, intptr_t ___valist3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___csound0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___attr1);
	__d_args[2] = ___format2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___valist3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void csoundcsharp.Csound6/MessageCallbackProxy::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageCallbackProxy_EndInvoke_m6BE8E9B8D87EC96017740443E66BB1E04603EC3C (MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundInitialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundInitialize_m4F12DA417DA8C1BE298914F64317A488796DF2E7 (int32_t ___flags0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundInitialize", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundInitialize)(___flags0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___flags0);
	#endif

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundCreate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundCreate_mC39E1767B19641012047AA494CC8CA0F60EC16F1 (intptr_t ___hostdata0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCreate", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCreate)(___hostdata0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___hostdata0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDestroy_m50262DB0006AD56FA69022C7AE3B375F8008AEF0 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundDestroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundDestroy)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetVersion_m1916CE467377B9E1346D896B016F80EF4D1DB00A (const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetVersion)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetAPIVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetAPIVersion_m0E3F34FE8C857A1E9A46DFAAD34E30C7F2664702 (const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetAPIVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetAPIVersion)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundParseOrc(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundParseOrc_mACC58FDEC1CEDCDA8AD3989C8BBB975C49C16AC4 (intptr_t ___csound0, String_t* ___str1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundParseOrc", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundParseOrc)(___csound0, ____str1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0, ____str1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileTree(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileTree_mD9316E8F68883039D8C0FA3DA8D8FB6F926F98E8 (intptr_t ___csound0, intptr_t ___root1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCompileTree", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCompileTree)(___csound0, ___root1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___root1);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDeleteTree(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDeleteTree_m8C6AAF6FE118D2610FDBDBE2C8BCD8593EF2EC87 (intptr_t ___csound0, intptr_t ___root1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundDeleteTree", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundDeleteTree)(___csound0, ___root1);
	#else
	il2cppPInvokeFunc(___csound0, ___root1);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileOrc(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileOrc_m2AD5762832317C1A62C250353840364B57BF6F29 (intptr_t ___csound0, String_t* ___orchStr1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCompileOrc", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___orchStr1' to native representation
	char* ____orchStr1_marshaled = NULL;
	____orchStr1_marshaled = il2cpp_codegen_marshal_string(___orchStr1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCompileOrc)(___csound0, ____orchStr1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ____orchStr1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___orchStr1' native representation
	il2cpp_codegen_marshal_free(____orchStr1_marshaled);
	____orchStr1_marshaled = NULL;

	return returnValue;
}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundEvalCode(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundEvalCode_m833484DBD824A4AFB96CF442A52B6705D9E568B7 (intptr_t ___csound0, String_t* ___orchStr1, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundEvalCode", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___orchStr1' to native representation
	char* ____orchStr1_marshaled = NULL;
	____orchStr1_marshaled = il2cpp_codegen_marshal_string(___orchStr1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundEvalCode)(___csound0, ____orchStr1_marshaled);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0, ____orchStr1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___orchStr1' native representation
	il2cpp_codegen_marshal_free(____orchStr1_marshaled);
	____orchStr1_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileArgs(System.IntPtr,System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileArgs_m6FD8F2289BACDDE0C0249EBC6A78D848C7378821 (intptr_t ___csound0, int32_t ___argc1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___argv2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, char**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCompileArgs", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argv2' to native representation
	char** ____argv2_marshaled = NULL;
	if (___argv2 != NULL)
	{
		il2cpp_array_size_t ____argv2_Length = (___argv2)->max_length;
		____argv2_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____argv2_Length + 1);
		(____argv2_marshaled)[____argv2_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____argv2_Length); i++)
		{
			(____argv2_marshaled)[i] = il2cpp_codegen_marshal_string((___argv2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____argv2_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCompileArgs)(___csound0, ___argc1, ____argv2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___argc1, ____argv2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___argv2' native representation
	if (____argv2_marshaled != NULL)
	{
		const il2cpp_array_size_t ____argv2_marshaled_CleanupLoopCount = (___argv2 != NULL) ? (___argv2)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____argv2_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____argv2_marshaled)[i]);
			(____argv2_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____argv2_marshaled);
		____argv2_marshaled = NULL;
	}

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundStart(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundStart_mFD990E0EA5A155DD64428FF9887059B0B3732E8D (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundStart", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundStart)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompile(System.IntPtr,System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompile_m55D2B168E3602FD5D8EC593A23BDB7F0CDF5EEF4 (intptr_t ___csound0, int32_t ___argc1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___argv2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, char**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCompile", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argv2' to native representation
	char** ____argv2_marshaled = NULL;
	if (___argv2 != NULL)
	{
		il2cpp_array_size_t ____argv2_Length = (___argv2)->max_length;
		____argv2_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____argv2_Length + 1);
		(____argv2_marshaled)[____argv2_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____argv2_Length); i++)
		{
			(____argv2_marshaled)[i] = il2cpp_codegen_marshal_string((___argv2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____argv2_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCompile)(___csound0, ___argc1, ____argv2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___argc1, ____argv2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___argv2' native representation
	if (____argv2_marshaled != NULL)
	{
		const il2cpp_array_size_t ____argv2_marshaled_CleanupLoopCount = (___argv2 != NULL) ? (___argv2)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____argv2_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____argv2_marshaled)[i]);
			(____argv2_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____argv2_marshaled);
		____argv2_marshaled = NULL;
	}

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileCsd(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileCsd_m8C501A95FFC311F03EC4C338BB1903B374467EB8 (intptr_t ___csound0, String_t* ___csdFilename1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCompileCsd", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___csdFilename1' to native representation
	char* ____csdFilename1_marshaled = NULL;
	____csdFilename1_marshaled = il2cpp_codegen_marshal_string(___csdFilename1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCompileCsd)(___csound0, ____csdFilename1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ____csdFilename1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___csdFilename1' native representation
	il2cpp_codegen_marshal_free(____csdFilename1_marshaled);
	____csdFilename1_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCompileCsdText(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCompileCsdText_m56601626080B0E1AACB7B4A461C5077A977DDBCF (intptr_t ___csound0, String_t* ___csdText1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCompileCsdText", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___csdText1' to native representation
	char* ____csdText1_marshaled = NULL;
	____csdText1_marshaled = il2cpp_codegen_marshal_string(___csdText1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCompileCsdText)(___csound0, ____csdText1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ____csdText1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___csdText1' native representation
	il2cpp_codegen_marshal_free(____csdText1_marshaled);
	____csdText1_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundPerform(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundPerform_mD3712D235A63F62058E5419CA66478372D31B2F0 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundPerform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundPerform)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundPerformKsmps(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundPerformKsmps_mCDAEB929EAD015D5C5307EC4210A2D62F9E7FDA4 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundPerformKsmps", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundPerformKsmps)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundPerformBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundPerformBuffer_m1982533798116C3B43F5402722C9F747A83CC06F (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundPerformBuffer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundPerformBuffer)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundStop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundStop_mBE598A65247D460CCB2EFBF508F7EF30ED06D7FD (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundStop", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundStop)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundCleanup_m7B2A8579A537A304C35B13F9E2CA91FD94EAA9E7 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCleanup", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundCleanup)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundReset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundReset_m783E7A47C983674F928C716F302322A72B8CABCC (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundReset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundReset)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetSr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetSr_mCE3D4166633C56AEF3CD7EA369E36F28F368E733 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetSr", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGetSr)(___csound0);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetKr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetKr_m793DD4FD8A2961CD84234E28A7678286E2D09E9A (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetKr", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGetKr)(___csound0);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.UInt32 csoundcsharp.Csound6/NativeMethods::csoundGetKsmps(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_csoundGetKsmps_m5A342708D72F3371C8DABE2265074835FD5701CC (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetKsmps", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetKsmps)(___csound0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.UInt32 csoundcsharp.Csound6/NativeMethods::csoundGetNchnls(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_csoundGetNchnls_m8D6DDC9A23420292B9CF61FC4BCC236B388B7FF9 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetNchnls", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetNchnls)(___csound0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.UInt32 csoundcsharp.Csound6/NativeMethods::csoundGetNchnlsInput(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_csoundGetNchnlsInput_mBB6CC7B823C5FC61A99E8A87417E445F7504D579 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetNchnlsInput", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetNchnlsInput)(___csound0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGet0dBFS(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGet0dBFS_m5D763849777A77C54DBA0CD3E3687286400F0F41 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGet0dBFS", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGet0dBFS)(___csound0);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int64 csoundcsharp.Csound6/NativeMethods::csoundGetCurrentTimeSamples(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_csoundGetCurrentTimeSamples_m56D4E3888AEBC55BF3AD4A69DAEC5CC23E204F12 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetCurrentTimeSamples", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetCurrentTimeSamples)(___csound0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetSizeOfMYFLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetSizeOfMYFLT_m7BBC400CE1CC58C2D369706A0D717D27E8E2338F (const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetSizeOfMYFLT", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetSizeOfMYFLT)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetHostData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetHostData_mCFDE5AAD6AAB7EA63DF9511FE2C86F1623F871E1 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetHostData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetHostData)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetHostData(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetHostData_mF8E7C8F8F010A020D45DB9A06DE2AFD911EFBDAB (intptr_t ___csound0, intptr_t ___hostData1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetHostData", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetHostData)(___csound0, ___hostData1);
	#else
	il2cppPInvokeFunc(___csound0, ___hostData1);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundSetOption(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundSetOption_m963BFB8101356BBA6FE742A572613DF08DA10711 (intptr_t ___csound0, String_t* ___option1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetOption", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___option1' to native representation
	char* ____option1_marshaled = NULL;
	____option1_marshaled = il2cpp_codegen_marshal_string(___option1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundSetOption)(___csound0, ____option1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ____option1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___option1' native representation
	il2cpp_codegen_marshal_free(____option1_marshaled);
	____option1_marshaled = NULL;

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundGetParams(System.IntPtr,CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundGetParams_m3EFF2DFC954864031946B1EAD84580564DC3D9F8 (intptr_t ___csound0, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms1, const RuntimeMethod* method)
{


	typedef void (CDECL *PInvokeFunc) (intptr_t, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetParams", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___parms1' to native representation
	CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke ____parms1_marshaled = {};

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundGetParams)(___csound0, ___parms1 != NULL ? (&____parms1_marshaled) : NULL);
	#else
	il2cppPInvokeFunc(___csound0, ___parms1 != NULL ? (&____parms1_marshaled) : NULL);
	#endif

	// Marshaling of parameter '___parms1' back from native representation
	if (___parms1 != NULL)
	{
		CSOUND_PARAMS__ctor_mF71A292C6ECED74DF43FEB5BB9B1B7BDAF3476FA(___parms1, NULL);
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_back(____parms1_marshaled, *___parms1);
	}

	// Marshaling cleanup of parameter '___parms1' native representation
	if ((&____parms1_marshaled) != NULL)
	{
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_cleanup(____parms1_marshaled);
	}

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetParams(System.IntPtr,CsoundUnityBridge/CSOUND_PARAMS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetParams_m7E62F007B50FEAC8A6AE628796F3DC064BC5AE61 (intptr_t ___csound0, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * ___parms1, const RuntimeMethod* method)
{


	typedef void (CDECL *PInvokeFunc) (intptr_t, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetParams", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___parms1' to native representation
	CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke ____parms1_marshaled = {};
	if (___parms1 != NULL)
	{
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke(*___parms1, ____parms1_marshaled);
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetParams)(___csound0, ___parms1 != NULL ? (&____parms1_marshaled) : NULL);
	#else
	il2cppPInvokeFunc(___csound0, ___parms1 != NULL ? (&____parms1_marshaled) : NULL);
	#endif

	// Marshaling cleanup of parameter '___parms1' native representation
	if ((&____parms1_marshaled) != NULL)
	{
		CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_cleanup(____parms1_marshaled);
	}

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetDebug(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetDebug_mAC9AB920FF92BA69D225A76C700B4E6DEABD651D (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetDebug", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetDebug)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetDebug(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetDebug_m322E59C7D5BCE98DA5FE209A32BF6F947CD38903 (intptr_t ___csound0, int32_t ___debug1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetDebug", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetDebug)(___csound0, ___debug1);
	#else
	il2cppPInvokeFunc(___csound0, ___debug1);
	#endif

}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetOutputName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetOutputName_mC5EF59C982EC4D75C674326F8E0C3351907C6C09 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetOutputName", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetOutputName)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetOutput(System.IntPtr,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetOutput_m4C740F7BE431455EA31C52E265EC0037BFF21C37 (intptr_t ___csound0, String_t* ___name1, String_t* ___type2, String_t* ___format3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetOutput", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Marshaling of parameter '___type2' to native representation
	char* ____type2_marshaled = NULL;
	____type2_marshaled = il2cpp_codegen_marshal_string(___type2);

	// Marshaling of parameter '___format3' to native representation
	char* ____format3_marshaled = NULL;
	____format3_marshaled = il2cpp_codegen_marshal_string(___format3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetOutput)(___csound0, ____name1_marshaled, ____type2_marshaled, ____format3_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____name1_marshaled, ____type2_marshaled, ____format3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	// Marshaling cleanup of parameter '___type2' native representation
	il2cpp_codegen_marshal_free(____type2_marshaled);
	____type2_marshaled = NULL;

	// Marshaling cleanup of parameter '___format3' native representation
	il2cpp_codegen_marshal_free(____format3_marshaled);
	____format3_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetInput(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetInput_m061297047C29981C754DEB0B5950B8D0FB68DC65 (intptr_t ___csound0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetInput", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetInput)(___csound0, ____name1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____name1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetMIDIFileInput(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetMIDIFileInput_m43C1A5ACC016B9CBD3BCC652ADBCE7AF20D1259F (intptr_t ___csound0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetMIDIFileInput", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetMIDIFileInput)(___csound0, ____name1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____name1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetMIDIFileOutput(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetMIDIFileOutput_m1972D7FCE5A496255C66571B09806CB38CE30B6D (intptr_t ___csound0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetMIDIFileOutput", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetMIDIFileOutput)(___csound0, ____name1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____name1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetFileOpenCallback(System.IntPtr,csoundcsharp.Csound6/FileOpenCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetFileOpenCallback_mF6CCFF6FF010DB4B8E3FD8D99D45DBCACD18B30F (intptr_t ___csound0, FileOpenCallbackProxy_tF0DF256AECFF6E0A8D8E20FACFD38A904C8E7ECA * ___processMessage1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetFileOpenCallback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___processMessage1' to native representation
	Il2CppMethodPointer ____processMessage1_marshaled = NULL;
	____processMessage1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___processMessage1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetFileOpenCallback)(___csound0, ____processMessage1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____processMessage1_marshaled);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetRTAudioModule(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetRTAudioModule_mF3BB9283D93A6B44EBA300354F822FFA1A7AE57C (intptr_t ___csound0, String_t* ___module1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetRTAudioModule", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___module1' to native representation
	char* ____module1_marshaled = NULL;
	____module1_marshaled = il2cpp_codegen_marshal_string(___module1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetRTAudioModule)(___csound0, ____module1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____module1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___module1' native representation
	il2cpp_codegen_marshal_free(____module1_marshaled);
	____module1_marshaled = NULL;

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetModule(System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetModule_m2D650DA200E91183D432D6E163C99291BD0F13BB (intptr_t ___csound0, int32_t ___number1, intptr_t* ___name2, intptr_t* ___type3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetModule", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetModule)(___csound0, ___number1, ___name2, ___type3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___number1, ___name2, ___type3);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetInputBufferSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetInputBufferSize_m9E49E06F499EA832CEA365F6C1BC05C954201552 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetInputBufferSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetInputBufferSize)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetOutputBufferSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetOutputBufferSize_m910D9DEC698EDCE43EA33457F0802CD84080679C (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetOutputBufferSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetOutputBufferSize)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetSpin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetSpin_m64DDBE5163E798A556960527646A2DF2367BC3D8 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetSpin", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetSpin)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundClearSpin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundClearSpin_mA03F5CC506131658C9D5EF919AB8F04CF5C4F55A (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundClearSpin", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundClearSpin)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundAddSpinSample(System.IntPtr,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundAddSpinSample_m0248E060DBA1573CC1CED0A33667908C1D0A0A44 (intptr_t ___csound0, int32_t ___frame1, int32_t ___channel2, float ___sample3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundAddSpinSample", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundAddSpinSample)(___csound0, ___frame1, ___channel2, ___sample3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0, ___frame1, ___channel2, ___sample3);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetSpinSample(System.IntPtr,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetSpinSample_m01868DF7A464BB85FF04A1019B57AE643AA9022F (intptr_t ___csound0, int32_t ___frame1, int32_t ___channel2, float ___value3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetSpinSample", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetSpinSample)(___csound0, ___frame1, ___channel2, ___value3);
	#else
	il2cppPInvokeFunc(___csound0, ___frame1, ___channel2, ___value3);
	#endif

}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetSpout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetSpout_m0B980931D01C0D4F0F62B1CBDAA2A5FD4D52B7B3 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetSpout", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetSpout)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetSpoutSample(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetSpoutSample_mBAAC67587670CB34F3C1A64233EBD938B8B27FB7 (intptr_t ___csound0, int32_t ___frame1, int32_t ___channel2, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetSpoutSample", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGetSpoutSample)(___csound0, ___frame1, ___channel2);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0, ___frame1, ___channel2);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetHostImplementedAudioIO(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetHostImplementedAudioIO_m3ADA09AF42CCBA1AFDD04F3D386793D50CF5919A (intptr_t ___csound0, int32_t ___state1, int32_t ___buffSize2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetHostImplementedAudioIO", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetHostImplementedAudioIO)(___csound0, ___state1, ___buffSize2);
	#else
	il2cppPInvokeFunc(___csound0, ___state1, ___buffSize2);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetAudioDevList(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetAudioDevList_mB856E90491E95C0EE0ECC5E29C84D6A8C3FDEAB8 (intptr_t ___csound0, intptr_t ___list1, int32_t ___isOutput2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetAudioDevList", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetAudioDevList)(___csound0, ___list1, ___isOutput2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___list1, ___isOutput2);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetMIDIModule(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetMIDIModule_m5A0CE0A06270832F44747BB810D2290A6D187F1F (intptr_t ___csound0, String_t* ___module1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetMIDIModule", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___module1' to native representation
	char* ____module1_marshaled = NULL;
	____module1_marshaled = il2cpp_codegen_marshal_string(___module1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetMIDIModule)(___csound0, ____module1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____module1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___module1' native representation
	il2cpp_codegen_marshal_free(____module1_marshaled);
	____module1_marshaled = NULL;

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetMIDIDevList(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetMIDIDevList_m9AB457C22CF4B7DF3EE70BB5F64CC9D707F740F8 (intptr_t ___csound0, intptr_t ___list1, int32_t ___isOutput2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetMIDIDevList", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetMIDIDevList)(___csound0, ___list1, ___isOutput2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___list1, ___isOutput2);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundReadScore(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundReadScore_mE66623B7709676881993EF9BA7BD58D4F2F311E4 (intptr_t ___csound0, String_t* ___score1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundReadScore", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___score1' to native representation
	char* ____score1_marshaled = NULL;
	____score1_marshaled = il2cpp_codegen_marshal_string(___score1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundReadScore)(___csound0, ____score1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ____score1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___score1' native representation
	il2cpp_codegen_marshal_free(____score1_marshaled);
	____score1_marshaled = NULL;

	return returnValue;
}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetScoreTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetScoreTime_m6A9A46112E81ECFE1AF0B8154AEEFB61F59C0648 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetScoreTime", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGetScoreTime)(___csound0);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundIsScorePending(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundIsScorePending_m71D49F4E32B5D17D1BCCD6B777A7B42992BF4C9F (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundIsScorePending", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundIsScorePending)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetScorePending(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetScorePending_m9E1C53B215463D7466EC63D40C14ACBA51373830 (intptr_t ___csound0, int32_t ___pending1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetScorePending", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetScorePending)(___csound0, ___pending1);
	#else
	il2cppPInvokeFunc(___csound0, ___pending1);
	#endif

}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetScoreOffsetSeconds(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetScoreOffsetSeconds_m347733BDFF8B7D378B1C4F595360E7E5D43BD2B7 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetScoreOffsetSeconds", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGetScoreOffsetSeconds)(___csound0);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetScoreOffsetSeconds(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetScoreOffsetSeconds_m9AA1ECDEE183A0303533517E38D08B0B00A935B7 (intptr_t ___csound0, float ___time1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetScoreOffsetSeconds", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetScoreOffsetSeconds)(___csound0, ___time1);
	#else
	il2cppPInvokeFunc(___csound0, ___time1);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundRewindScore(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundRewindScore_m11D7FF96A568093B8942828C76617B3F62717391 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundRewindScore", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundRewindScore)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundScoreSort(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundScoreSort_mADA195CA0CBFBAF38FAAD41E912435FBCB777DA0 (intptr_t ___csound0, intptr_t ___inFile1, intptr_t ___outFile2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundScoreSort", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundScoreSort)(___csound0, ___inFile1, ___outFile2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___inFile1, ___outFile2);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundScoreExtract(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundScoreExtract_mE48D663B80F7F6A12B9BAEB0BDC3DB431025D209 (intptr_t ___csound0, intptr_t ___inFile1, intptr_t ___outFile2, intptr_t ___extractFile3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundScoreExtract", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundScoreExtract)(___csound0, ___inFile1, ___outFile2, ___extractFile3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___inFile1, ___outFile2, ___extractFile3);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetDefaultMessageCallback(csoundcsharp.Csound6/MessageCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetDefaultMessageCallback_mB523135990AD1E110E145308B2247403031A2318 (MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * ___processMessage0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetDefaultMessageCallback", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___processMessage0' to native representation
	Il2CppMethodPointer ____processMessage0_marshaled = NULL;
	____processMessage0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___processMessage0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetDefaultMessageCallback)(____processMessage0_marshaled);
	#else
	il2cppPInvokeFunc(____processMessage0_marshaled);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetMessageCallback(System.IntPtr,csoundcsharp.Csound6/MessageCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetMessageCallback_mA5667F94A687391CD0CCB0D6D1898E37C74E602F (intptr_t ___csound0, MessageCallbackProxy_t392705CEE6A01D6CF8F8FA3A2E9E346A19861A3C * ___processMessage1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetMessageCallback", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___processMessage1' to native representation
	Il2CppMethodPointer ____processMessage1_marshaled = NULL;
	____processMessage1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___processMessage1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetMessageCallback)(___csound0, ____processMessage1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____processMessage1_marshaled);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetMessageLevel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetMessageLevel_m6C3788A9B6DA244AEE078DD37FE6F99A7E445898 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetMessageLevel", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetMessageLevel)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetMessageLevel(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetMessageLevel_m2DE4CC05349E0ACF0835BDBE209F3BB29D135C66 (intptr_t ___csound0, int32_t ___messageLevel1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetMessageLevel", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetMessageLevel)(___csound0, ___messageLevel1);
	#else
	il2cppPInvokeFunc(___csound0, ___messageLevel1);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundCreateMessageBuffer(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundCreateMessageBuffer_m20F2934E23F4C7A15D9EBC75D0EC89555941683B (intptr_t ___csound0, int32_t ___toStdOut1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundCreateMessageBuffer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundCreateMessageBuffer)(___csound0, ___toStdOut1);
	#else
	il2cppPInvokeFunc(___csound0, ___toStdOut1);
	#endif

}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetFirstMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetFirstMessage_m98CF7A9FB2059BD2DE00D1DD47888ACBD1E9CE0C (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetFirstMessage", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetFirstMessage)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundPopFirstMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundPopFirstMessage_m4F74F640DF657737F64BA36FC5A6D07C3FE79AF3 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundPopFirstMessage", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundPopFirstMessage)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetMessageCnt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetMessageCnt_mA35A9B63F94C87DAE3771B94EFDF20EE6CF88C1F (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetMessageCnt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetMessageCnt)(___csound0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDestroyMessageBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDestroyMessageBuffer_m6262AAEB434CF4DA03973C8C0268B35CF7E8130D (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundDestroyMessageBuffer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundDestroyMessageBuffer)(___csound0);
	#else
	il2cppPInvokeFunc(___csound0);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetChannelPtr(System.IntPtr,System.IntPtr&,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetChannelPtr_mC297A69548E034B4F2B70CA3EF734F398F511899 (intptr_t ___csound0, intptr_t* ___pChannel1, String_t* ___name2, int32_t ___flags3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetChannelPtr", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name2' to native representation
	char* ____name2_marshaled = NULL;
	____name2_marshaled = il2cpp_codegen_marshal_string(___name2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetChannelPtr)(___csound0, ___pChannel1, ____name2_marshaled, ___flags3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___pChannel1, ____name2_marshaled, ___flags3);
	#endif

	// Marshaling cleanup of parameter '___name2' native representation
	il2cpp_codegen_marshal_free(____name2_marshaled);
	____name2_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundListChannels(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundListChannels_mAFD2C1491CD2BE5666E30628A68AB0229BFC39B7 (intptr_t ___csound0, intptr_t* ___ppChannels1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundListChannels", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundListChannels)(___csound0, ___ppChannels1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___ppChannels1);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDeleteChannelList(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDeleteChannelList_mBCE04F86005FF12D45E0A961F9D5364F9E55C4B1 (intptr_t ___csound0, intptr_t ___ppChannels1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundDeleteChannelList", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundDeleteChannelList)(___csound0, ___ppChannels1);
	#else
	il2cppPInvokeFunc(___csound0, ___ppChannels1);
	#endif

}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundGetControlChannel(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundGetControlChannel_mDBBB70EA9A9AE361FC5F65A5CF7EBA9EC014E3C3 (intptr_t ___csound0, String_t* ___str1, intptr_t ___err2, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetControlChannel", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundGetControlChannel)(___csound0, ____str1_marshaled, ___err2);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0, ____str1_marshaled, ___err2);
	#endif

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundSetControlChannel(System.IntPtr,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundSetControlChannel_m6E7F2206EB8C37FCB2C91B13D7EDDB057BFD0A7C (intptr_t ___csound0, String_t* ___str1, float ___value2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetControlChannel", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundSetControlChannel)(___csound0, ____str1_marshaled, ___value2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0, ____str1_marshaled, ___value2);
	#endif

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundGetAudioChannel(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundGetAudioChannel_m7209003BC0E24A6BF4FEB2B7C5847089BFD41BA6 (intptr_t ___csound0, String_t* ___name1, intptr_t ___samples2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetAudioChannel", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundGetAudioChannel)(___csound0, ____name1_marshaled, ___samples2);
	#else
	il2cppPInvokeFunc(___csound0, ____name1_marshaled, ___samples2);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetAudioChannel(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetAudioChannel_m21AA27A48BB104C3926B2E890D57DE747ABDE001 (intptr_t ___csound0, String_t* ___name1, intptr_t ___samples2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetAudioChannel", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetAudioChannel)(___csound0, ____name1_marshaled, ___samples2);
	#else
	il2cppPInvokeFunc(___csound0, ____name1_marshaled, ___samples2);
	#endif

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundSetStringChannel(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundSetStringChannel_m72944FBBCC87A502BC07DB3A8FDC18DC3C613759 (intptr_t ___csound0, String_t* ___str1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetStringChannel", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundSetStringChannel)(___csound0, ____str1_marshaled, ____value2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0, ____str1_marshaled, ____value2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundInputMessage(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundInputMessage_m9C264BD04D8258C2BD60DFFF4ECA4B02F4AF74E5 (intptr_t ___csound0, String_t* ___str1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundInputMessage", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundInputMessage)(___csound0, ____str1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0, ____str1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundRegisterSenseEventCallback(System.IntPtr,csoundcsharp.Csound6/SenseEventCallbackProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundRegisterSenseEventCallback_m787329E3D6561D246E083842A4729765E3014C49 (intptr_t ___csound0, SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * ___senseEventProxy1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundRegisterSenseEventCallback", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___senseEventProxy1' to native representation
	Il2CppMethodPointer ____senseEventProxy1_marshaled = NULL;
	____senseEventProxy1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___senseEventProxy1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundRegisterSenseEventCallback)(___csound0, ____senseEventProxy1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ____senseEventProxy1_marshaled);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundTableLength(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundTableLength_mE8B4C5D884DC91565E7D09990664EF946D7F61AE (intptr_t ___csound0, int32_t ___table1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableLength", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundTableLength)(___csound0, ___table1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___table1);
	#endif

	return returnValue;
}
// System.Single csoundcsharp.Csound6/NativeMethods::csoundTableGet(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NativeMethods_csoundTableGet_m9C5DBF614D6E13871FF2A347BDB4363169D9F79D (intptr_t ___csound0, int32_t ___table1, int32_t ___index2, const RuntimeMethod* method)
{
	typedef float (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableGet", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	float returnValue = reinterpret_cast<PInvokeFunc>(csoundTableGet)(___csound0, ___table1, ___index2);
	#else
	float returnValue = il2cppPInvokeFunc(___csound0, ___table1, ___index2);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableSet(System.IntPtr,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableSet_mF270BCEA1EBB9AAB0D64191F3ABFA4604E55BF95 (intptr_t ___csound0, int32_t ___table1, int32_t ___index2, float ___value3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableSet", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundTableSet)(___csound0, ___table1, ___index2, ___value3);
	#else
	il2cppPInvokeFunc(___csound0, ___table1, ___index2, ___value3);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyOut(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyOut_m192B5C74EF9EB100C223CD2BE615CE075EACE67B (intptr_t ___csound0, int32_t ___table1, intptr_t ___dest2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableCopyOut", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundTableCopyOut)(___csound0, ___table1, ___dest2);
	#else
	il2cppPInvokeFunc(___csound0, ___table1, ___dest2);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyOutAsync(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyOutAsync_mB96CE207CC6BA17819A7350A99980A24FE4C5D90 (intptr_t ___csound0, int32_t ___table1, intptr_t ___dest2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableCopyOutAsync", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundTableCopyOutAsync)(___csound0, ___table1, ___dest2);
	#else
	il2cppPInvokeFunc(___csound0, ___table1, ___dest2);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyIn(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyIn_mCD71FE5471E156A7C7CF8996C5CD09BDE16E7D21 (intptr_t ___csound0, int32_t ___table1, intptr_t ___source2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableCopyIn", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundTableCopyIn)(___csound0, ___table1, ___source2);
	#else
	il2cppPInvokeFunc(___csound0, ___table1, ___source2);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundTableCopyInAsync(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundTableCopyInAsync_mCC01AE2BE19AE64917CB91CE7B3E4F20AB47A50B (intptr_t ___csound0, int32_t ___table1, intptr_t ___source2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundTableCopyInAsync", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundTableCopyInAsync)(___csound0, ___table1, ___source2);
	#else
	il2cppPInvokeFunc(___csound0, ___table1, ___source2);
	#endif

}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetTable(System.IntPtr,System.IntPtr&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetTable_m8B3E25D3B2FD43E6F35C027D1296D7D6A67FEF57 (intptr_t ___csound0, intptr_t* ___tablePtr1, int32_t ___index2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetTable", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetTable)(___csound0, ___tablePtr1, ___index2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___tablePtr1, ___index2);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundGetTableArgs(System.IntPtr,System.IntPtr&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundGetTableArgs_m05213248DF67D1CFA01D13CBADE4A692F4AB5560 (intptr_t ___csound0, intptr_t* ___argsPtr1, int32_t ___index2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetTableArgs", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetTableArgs)(___csound0, ___argsPtr1, ___index2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___argsPtr1, ___index2);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundIsNamedGEN(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundIsNamedGEN_m508B3CD25F95AD19D550E27D1D2016B8AC21A37A (intptr_t ___csound0, int32_t ___num1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundIsNamedGEN", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundIsNamedGEN)(___csound0, ___num1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___num1);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundGetNamedGEN(System.IntPtr,System.Int32,System.String&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundGetNamedGEN_m1B32016B5ED11CD511DE032EAD085051432714F7 (intptr_t ___csound0, int32_t ___num1, String_t** ___name2, int32_t ___len3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t, char**, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(char**) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetNamedGEN", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name2' to native representation
	char* ____name2_empty = NULL;
	char** ____name2_marshaled = &____name2_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundGetNamedGEN)(___csound0, ___num1, ____name2_marshaled, ___len3);
	#else
	il2cppPInvokeFunc(___csound0, ___num1, ____name2_marshaled, ___len3);
	#endif

	// Marshaling of parameter '___name2' back from native representation
	String_t* _____name2_marshaled_unmarshaled_dereferenced = NULL;
	_____name2_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_string_result(*____name2_marshaled);
	*___name2 = _____name2_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___name2, (void*)____name2_marshaled);

	// Marshaling cleanup of parameter '___name2' native representation
	il2cpp_codegen_marshal_free(*____name2_marshaled);
	*____name2_marshaled = NULL;

}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetNamedGens(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetNamedGens_m438AA04E1327FF971A997F300BDADA95EF992CFB (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetNamedGens", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetNamedGens)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundNewOpcodeList(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundNewOpcodeList_mB2587202593A4B1CCE63E0F66DD3986A7D61BC47 (intptr_t ___csound0, intptr_t* ___ppOpcodeList1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundNewOpcodeList", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundNewOpcodeList)(___csound0, ___ppOpcodeList1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___csound0, ___ppOpcodeList1);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDisposeOpcodeList(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDisposeOpcodeList_m24751428DFF0661F122D85FFB12321E2A84D5782 (intptr_t ___csound0, intptr_t ___ppOpcodeList1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundDisposeOpcodeList", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundDisposeOpcodeList)(___csound0, ___ppOpcodeList1);
	#else
	il2cppPInvokeFunc(___csound0, ___ppOpcodeList1);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSetYieldCallback(System.IntPtr,csoundcsharp.Csound6/YieldCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSetYieldCallback_m62D7BA3993E83E8E7978136CE8E539BC5FBD4851 (intptr_t ___csound0, YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * ___yieldCallback1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetYieldCallback", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___yieldCallback1' to native representation
	Il2CppMethodPointer ____yieldCallback1_marshaled = NULL;
	____yieldCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___yieldCallback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSetYieldCallback)(___csound0, ____yieldCallback1_marshaled);
	#else
	il2cppPInvokeFunc(___csound0, ____yieldCallback1_marshaled);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundSleep(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundSleep_m6C156642035F5271AE55841809F2B58E73AD97D5 (uint32_t ___milleseconds0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSleep", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundSleep)(___milleseconds0);
	#else
	il2cppPInvokeFunc(___milleseconds0);
	#endif

}
// System.Int64 csoundcsharp.Csound6/NativeMethods::csoundRunCommand(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_csoundRunCommand_mF96C070C70E8A2EBBB9CAF2C6EA7F179788D7490 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___argv0, int32_t ___nowait1, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (char**, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundRunCommand", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argv0' to native representation
	char** ____argv0_marshaled = NULL;
	if (___argv0 != NULL)
	{
		il2cpp_array_size_t ____argv0_Length = (___argv0)->max_length;
		____argv0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____argv0_Length + 1);
		(____argv0_marshaled)[____argv0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____argv0_Length); i++)
		{
			(____argv0_marshaled)[i] = il2cpp_codegen_marshal_string((___argv0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____argv0_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(csoundRunCommand)(____argv0_marshaled, ___nowait1);
	#else
	int64_t returnValue = il2cppPInvokeFunc(____argv0_marshaled, ___nowait1);
	#endif

	// Marshaling cleanup of parameter '___argv0' native representation
	if (____argv0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____argv0_marshaled_CleanupLoopCount = (___argv0 != NULL) ? (___argv0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____argv0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____argv0_marshaled)[i]);
			(____argv0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____argv0_marshaled);
		____argv0_marshaled = NULL;
	}

	return returnValue;
}
// System.UInt32 csoundcsharp.Csound6/NativeMethods::csoundGetRandomSeedFromTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_csoundGetRandomSeedFromTime_m48DEDE951F0B70A2B6CCCC0B5FEFC3446662723E (const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetRandomSeedFromTime", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetRandomSeedFromTime)();
	#else
	uint32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundGetEnv(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundGetEnv_m09E44AC78F0D4B452E874AC6C7F42282B48C737B (intptr_t ___csound0, String_t* ___key1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundGetEnv", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundGetEnv)(___csound0, ____key1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0, ____key1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	return returnValue;
}
// System.Int32 csoundcsharp.Csound6/NativeMethods::csoundSetGlobalEnv(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_csoundSetGlobalEnv_mBA95F285391C45F22D17C2039C4412B90FFB6382 (String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundSetGlobalEnv", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(csoundSetGlobalEnv)(____name0_marshaled, ____value1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____name0_marshaled, ____value1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr csoundcsharp.Csound6/NativeMethods::csoundListUtilities(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_csoundListUtilities_m8964F52E2D39C40DED274F253CFB1D4C7AEE92F5 (intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundListUtilities", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(csoundListUtilities)(___csound0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___csound0);
	#endif

	return returnValue;
}
// System.Void csoundcsharp.Csound6/NativeMethods::csoundDeleteUtilityList(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_csoundDeleteUtilityList_m22A07292531E05F3E1D9DCB1ADEF06DF6BB3FE72 (intptr_t ___csound0, intptr_t ___list1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_csoundandroid_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("csoundandroid"), "csoundDeleteUtilityList", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_csoundandroid_INTERNAL
	reinterpret_cast<PInvokeFunc>(csoundDeleteUtilityList)(___csound0, ___list1);
	#else
	il2cppPInvokeFunc(___csound0, ___list1);
	#endif

}
// System.Void csoundcsharp.Csound6/NativeMethods::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods__ctor_m9EFAA990EE0BEFA2151561012B67D480ADF08F5A (NativeMethods_tCA0B7DAC30AF7A21D2F603AA35AE8615EE4E7F2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164 (RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164 * __this, intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___csound0);

}
// System.Void csoundcsharp.Csound6/RtcloseCallbackProxy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcloseCallbackProxy__ctor_mB12726BA01248A4EB75AB9CE256310B1F55C76F3 (RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void csoundcsharp.Csound6/RtcloseCallbackProxy::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcloseCallbackProxy_Invoke_m05912123A00F8DAD16ABAB9A721ACEB5145A6C61 (RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164 * __this, intptr_t ___csound0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___csound0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___csound0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___csound0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___csound0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___csound0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult csoundcsharp.Csound6/RtcloseCallbackProxy::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RtcloseCallbackProxy_BeginInvoke_m72A131C3E3DA4FE8D38E8197385819849938815D (RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164 * __this, intptr_t ___csound0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___csound0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void csoundcsharp.Csound6/RtcloseCallbackProxy::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcloseCallbackProxy_EndInvoke_m10DDB9ED08CDF53B57E67C1143816F787C29CA1B (RtcloseCallbackProxy_t08EBDA84617DE6034ACB4E99955BEFE69943C164 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * __this, intptr_t ___csound0, intptr_t ___userdata1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___csound0, ___userdata1);

}
// System.Void csoundcsharp.Csound6/SenseEventCallbackProxy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventCallbackProxy__ctor_m9E6BB1A948FF8CA7A051EF32C7EE6D8A8EA09401 (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void csoundcsharp.Csound6/SenseEventCallbackProxy::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventCallbackProxy_Invoke_mF4041F6A97D6F2216D3EC30B4FE092EECEC6D875 (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * __this, intptr_t ___csound0, intptr_t ___userdata1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___csound0, ___userdata1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, ___userdata1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___csound0, ___userdata1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___csound0, ___userdata1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___csound0, ___userdata1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___csound0, ___userdata1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, ___userdata1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult csoundcsharp.Csound6/SenseEventCallbackProxy::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SenseEventCallbackProxy_BeginInvoke_mED19E30CA611B64FE8B3C820D2C26C23075612B1 (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * __this, intptr_t ___csound0, intptr_t ___userdata1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___csound0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userdata1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void csoundcsharp.Csound6/SenseEventCallbackProxy::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventCallbackProxy_EndInvoke_m90FC024870FD7E999EB22A736490FB676AC5D094 (SenseEventCallbackProxy_t5D42F1FFEAFA361C6C6C6F5F48DCEFC6A5B1E8BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * __this, intptr_t ___csound0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___csound0);

	return returnValue;
}
// System.Void csoundcsharp.Csound6/YieldCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldCallback__ctor_m84B7710A98C5C898C1D389F4CC04A11F01BA2E73 (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 csoundcsharp.Csound6/YieldCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YieldCallback_Invoke_m80E6AD4212127FF4DB302DBB0BEED7BE7D43B05E (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * __this, intptr_t ___csound0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___csound0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___csound0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___csound0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___csound0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___csound0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___csound0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult csoundcsharp.Csound6/YieldCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldCallback_BeginInvoke_mBCE08C2DA0B1A8E7205C9816B71C6D7081BD15ED (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * __this, intptr_t ___csound0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___csound0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 csoundcsharp.Csound6/YieldCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YieldCallback_EndInvoke_mF3C00CF9EA6948C0EE784C099FEDE39996343295 (YieldCallback_tB0C42F3A0F16F5F25614D04DF5D63FF71E7DD79E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnity/<GetSamples>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSamplesU3Ed__105__ctor_m2C3EC6F184D71C30A17139C81FF278736B5EABAE (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CsoundUnity/<GetSamples>d__105::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSamplesU3Ed__105_System_IDisposable_Dispose_m08FC3FC1C93F1D54BDE74ACEA57992E7FD20DD3E (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CsoundUnity/<GetSamples>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetSamplesU3Ed__105_MoveNext_m865B4909D226BBB16E33B302DC4AB781F9F7420B (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAsync_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_mD68D1E6639A644A11DC097CF29805AD594A3F496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_2 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * G_B12_0 = NULL;
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * G_B11_0 = NULL;
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * G_B19_0 = NULL;
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * G_B18_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_3 = __this->get_origin_2();
		V_6 = L_3;
		int32_t L_4 = V_6;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0115;
			}
			case 2:
			{
				goto IL_0121;
			}
		}
	}
	{
		goto IL_012b;
	}

IL_0037:
	{
		// var req = Resources.LoadAsync<AudioClip>(source);
		String_t* L_5 = __this->get_source_3();
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_6;
		L_6 = Resources_LoadAsync_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_mD68D1E6639A644A11DC097CF29805AD594A3F496(L_5, /*hidden argument*/Resources_LoadAsync_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_mD68D1E6639A644A11DC097CF29805AD594A3F496_RuntimeMethod_var);
		__this->set_U3CreqU3E5__2_5(L_6);
		goto IL_0061;
	}

IL_004a:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0061:
	{
		// while (!req.isDone)
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_7 = __this->get_U3CreqU3E5__2_5();
		NullCheck(L_7);
		bool L_8;
		L_8 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// var samples = ((AudioClip)req.asset).samples;
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_9 = __this->get_U3CreqU3E5__2_5();
		NullCheck(L_9);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_10;
		L_10 = ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0(L_9, /*hidden argument*/NULL);
		NullCheck(((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)CastclassSealed((RuntimeObject*)L_10, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_il2cpp_TypeInfo_var)));
		int32_t L_11;
		L_11 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)CastclassSealed((RuntimeObject*)L_10, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_11;
		// if (samples == 0)
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_009b;
		}
	}
	{
		// onSamplesLoaded?.Invoke(null);
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_13 = __this->get_onSamplesLoaded_4();
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_0093;
		}
	}
	{
		goto IL_0099;
	}

IL_0093:
	{
		NullCheck(G_B12_0);
		Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2(G_B12_0, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL, /*hidden argument*/Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var);
	}

IL_0099:
	{
		// yield break;
		return (bool)0;
	}

IL_009b:
	{
		// var ac = ((AudioClip)req.asset);
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_15 = __this->get_U3CreqU3E5__2_5();
		NullCheck(L_15);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_16;
		L_16 = ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0(L_15, /*hidden argument*/NULL);
		V_2 = ((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)CastclassSealed((RuntimeObject*)L_16, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_il2cpp_TypeInfo_var));
		// var data = new float[samples * ac.channels];
		int32_t L_17 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_18, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_19)));
		V_3 = L_20;
		// ac.GetData(data, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = V_3;
		NullCheck(L_21);
		bool L_23;
		L_23 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_21, L_22, 0, /*hidden argument*/NULL);
		// MYFLT[] res = new MYFLT[samples * ac.channels];
		int32_t L_24 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_25, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_26)));
		V_4 = L_27;
		// var s = 0;
		V_5 = 0;
		// foreach (var d in data)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = V_3;
		V_7 = L_28;
		V_8 = 0;
		goto IL_00f8;
	}

IL_00dd:
	{
		// foreach (var d in data)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = V_7;
		int32_t L_30 = V_8;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_9 = L_32;
		// res[s] = (MYFLT)d;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = V_4;
		int32_t L_34 = V_5;
		float L_35 = V_9;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (float)((float)((float)L_35)));
		// s++;
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f8:
	{
		// foreach (var d in data)
		int32_t L_38 = V_8;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_00dd;
		}
	}
	{
		// onSamplesLoaded?.Invoke(res);
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_40 = __this->get_onSamplesLoaded_4();
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_41 = L_40;
		G_B18_0 = L_41;
		if (L_41)
		{
			G_B19_0 = L_41;
			goto IL_010c;
		}
	}
	{
		goto IL_012b;
	}

IL_010c:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = V_4;
		NullCheck(G_B19_0);
		Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2(G_B19_0, L_42, /*hidden argument*/Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var);
		// break;
		goto IL_012b;
	}

IL_0115:
	{
		// Debug.LogWarning("Not implemented yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A, /*hidden argument*/NULL);
		// break;
		goto IL_012b;
	}

IL_0121:
	{
		// Debug.LogWarning("Not implemented yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralAFB6AC133459DCC9953C13E07CA405E00447466A, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// break;
		__this->set_U3CreqU3E5__2_5((ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object CsoundUnity/<GetSamples>d__105::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetSamplesU3Ed__105_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2B2AE7CD43AAFA2479A92E607352F3CB7286A87E (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CsoundUnity/<GetSamples>d__105::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSamplesU3Ed__105_System_Collections_IEnumerator_Reset_m86E1E813A607E09CBF1580ED8718965C1239DE79 (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetSamplesU3Ed__105_System_Collections_IEnumerator_Reset_m86E1E813A607E09CBF1580ED8718965C1239DE79_RuntimeMethod_var)));
	}
}
// System.Object CsoundUnity/<GetSamples>d__105::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetSamplesU3Ed__105_System_Collections_IEnumerator_get_Current_m536601A28CEF746A5DB7D126CB940BE3D41D533A (U3CGetSamplesU3Ed__105_t271128603188A3519543D824E43109F94A152BA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnity/<Logging>d__113::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoggingU3Ed__113__ctor_m9E816D075B0888A8A22867130D4616BF4A76C88A (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CsoundUnity/<Logging>d__113::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoggingU3Ed__113_System_IDisposable_Dispose_m099C0F0E4B633140E6E29BB495A2165BE7220F7E (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CsoundUnity/<Logging>d__113::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoggingU3Ed__113_MoveNext_m3D0AB05EB70C2047B5409ABC24DEF3F6DED58E3C (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00c6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00ab;
	}

IL_002f:
	{
		// for (int i = 0; i < csound.GetCsoundMessageCount(); i++)
		__this->set_U3CiU3E5__2_4(0);
		goto IL_0077;
	}

IL_0038:
	{
		// if (this.logCsoundOutput)    // exiting when csound messages are very high in number
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->get_logCsoundOutput_6();
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		// print(csound.GetCsoundMessage());
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_5 = V_1;
		NullCheck(L_5);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_6 = L_5->get_csound_14();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = CsoundUnityBridge_GetCsoundMessage_mAC6EC0F174655CAF466A026393A0CD9BB40A9EF6(L_6, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_7, /*hidden argument*/NULL);
		// yield return null;          //avoids Unity stuck on performance end
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0060:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0067:
	{
		// for (int i = 0; i < csound.GetCsoundMessageCount(); i++)
		int32_t L_8 = __this->get_U3CiU3E5__2_4();
		V_2 = L_8;
		int32_t L_9 = V_2;
		__this->set_U3CiU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_0077:
	{
		// for (int i = 0; i < csound.GetCsoundMessageCount(); i++)
		int32_t L_10 = __this->get_U3CiU3E5__2_4();
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_11 = V_1;
		NullCheck(L_11);
		CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * L_12 = L_11->get_csound_14();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = CsoundUnityBridge_GetCsoundMessageCount_mD0A28B7666E2B1424EEB49FA800BD518D0C7040B(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_0038;
		}
	}
	{
		// yield return new WaitForSeconds(interval);
		float L_14 = __this->get_interval_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ab:
	{
		// while (this.logCsoundOutput)
		CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = L_16->get_logCsoundOutput_6();
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		// yield return null; //wait one frame
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00c6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_00ab;
	}
}
// System.Object CsoundUnity/<Logging>d__113::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoggingU3Ed__113_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m93AEC17DDB7E6DF24191B5AC63648738138963E5 (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CsoundUnity/<Logging>d__113::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoggingU3Ed__113_System_Collections_IEnumerator_Reset_m05DE0705C3F76DF4ECF9A998FA728025839C7209 (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoggingU3Ed__113_System_Collections_IEnumerator_Reset_m05DE0705C3F76DF4ECF9A998FA728025839C7209_RuntimeMethod_var)));
	}
}
// System.Object CsoundUnity/<Logging>d__113::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoggingU3Ed__113_System_Collections_IEnumerator_get_Current_m8A3A35147FE43D02C035E9615999DFC0DDE1FB90 (U3CLoggingU3Ed__113_t5D2B6122A8B7E4F153DC09D81438F4A823DF9563 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 (CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CsoundUnity/CsoundInitialized::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundInitialized__ctor_m1C31019777C96ED427E19FF2E86A4A27FA68F677 (CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CsoundUnity/CsoundInitialized::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundInitialized_Invoke_mE03151B6AFDEC8D673ABEB877FD44F02F653316C (CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CsoundUnity/CsoundInitialized::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CsoundInitialized_BeginInvoke_m57A4643D6471D151255DD5EAA78EA17DF6A4D894 (CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void CsoundUnity/CsoundInitialized::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CsoundInitialized_EndInvoke_mB86E95B7969CC9BF4E043AEB1A66F3A5BC1342A3 (CsoundInitialized_tE23E87CAA67346789AB8DDAF8841FEA9D24641A2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mE952A48345C502F782CE38F717F58EDEB7AF03EB (U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 CsoundUnityBridge/<>c__DisplayClass32_0::<SetYieldCallback>b__0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass32_0_U3CSetYieldCallbackU3Eb__0_mA3B38F892EF32B316761CC2D37FBCE143EAECEED (U3CU3Ec__DisplayClass32_0_t396E91DBB693BC02EA8F274548AFAA2FB06BBE51 * __this, intptr_t ___csd0, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// if (callback == null) return -1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_callback_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (callback == null) return -1;
		return (-1);
	}

IL_000a:
	{
		// callback?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_callback_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0016;
		}
	}
	{
		goto IL_001b;
	}

IL_0016:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// return 1;
		return 1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CsoundUnityBridge/CSOUND_PARAMS
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke(const CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F& unmarshaled, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke& marshaled)
{
	marshaled.___debug_mode_0 = unmarshaled.get_debug_mode_0();
	marshaled.___buffer_frames_1 = unmarshaled.get_buffer_frames_1();
	marshaled.___hardware_buffer_frames_2 = unmarshaled.get_hardware_buffer_frames_2();
	marshaled.___displays_3 = unmarshaled.get_displays_3();
	marshaled.___ascii_graphs_4 = unmarshaled.get_ascii_graphs_4();
	marshaled.___postscript_graphs_5 = unmarshaled.get_postscript_graphs_5();
	marshaled.___message_level_6 = unmarshaled.get_message_level_6();
	marshaled.___tempo_7 = unmarshaled.get_tempo_7();
	marshaled.___ring_bell_8 = unmarshaled.get_ring_bell_8();
	marshaled.___use_cscore_9 = unmarshaled.get_use_cscore_9();
	marshaled.___terminate_on_midi_10 = unmarshaled.get_terminate_on_midi_10();
	marshaled.___heartbeat_11 = unmarshaled.get_heartbeat_11();
	marshaled.___defer_gen01_load_12 = unmarshaled.get_defer_gen01_load_12();
	marshaled.___midi_key_13 = unmarshaled.get_midi_key_13();
	marshaled.___midi_key_cps_14 = unmarshaled.get_midi_key_cps_14();
	marshaled.___midi_key_oct_15 = unmarshaled.get_midi_key_oct_15();
	marshaled.___midi_key_pch_16 = unmarshaled.get_midi_key_pch_16();
	marshaled.___midi_velocity_17 = unmarshaled.get_midi_velocity_17();
	marshaled.___midi_velocity_amp_18 = unmarshaled.get_midi_velocity_amp_18();
	marshaled.___no_default_paths_19 = unmarshaled.get_no_default_paths_19();
	marshaled.___number_of_threads_20 = unmarshaled.get_number_of_threads_20();
	marshaled.___syntax_check_only_21 = unmarshaled.get_syntax_check_only_21();
	marshaled.___csd_line_counts_22 = unmarshaled.get_csd_line_counts_22();
	marshaled.___compute_weights_23 = unmarshaled.get_compute_weights_23();
	marshaled.___realtime_mode_24 = unmarshaled.get_realtime_mode_24();
	marshaled.___sample_accurate_25 = unmarshaled.get_sample_accurate_25();
	marshaled.___sample_rate_override_26 = unmarshaled.get_sample_rate_override_26();
	marshaled.___control_rate_override_27 = unmarshaled.get_control_rate_override_27();
	marshaled.___nchnls_override_28 = unmarshaled.get_nchnls_override_28();
	marshaled.___nchnls_i_override_29 = unmarshaled.get_nchnls_i_override_29();
	marshaled.___e0dbfs_override_30 = unmarshaled.get_e0dbfs_override_30();
	marshaled.___daemon_31 = unmarshaled.get_daemon_31();
	marshaled.___ksmps_override_32 = unmarshaled.get_ksmps_override_32();
	marshaled.___FFT_library_33 = unmarshaled.get_FFT_library_33();
}
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_back(const CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke& marshaled, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F& unmarshaled)
{
	int32_t unmarshaled_debug_mode_temp_0 = 0;
	unmarshaled_debug_mode_temp_0 = marshaled.___debug_mode_0;
	unmarshaled.set_debug_mode_0(unmarshaled_debug_mode_temp_0);
	int32_t unmarshaled_buffer_frames_temp_1 = 0;
	unmarshaled_buffer_frames_temp_1 = marshaled.___buffer_frames_1;
	unmarshaled.set_buffer_frames_1(unmarshaled_buffer_frames_temp_1);
	int32_t unmarshaled_hardware_buffer_frames_temp_2 = 0;
	unmarshaled_hardware_buffer_frames_temp_2 = marshaled.___hardware_buffer_frames_2;
	unmarshaled.set_hardware_buffer_frames_2(unmarshaled_hardware_buffer_frames_temp_2);
	int32_t unmarshaled_displays_temp_3 = 0;
	unmarshaled_displays_temp_3 = marshaled.___displays_3;
	unmarshaled.set_displays_3(unmarshaled_displays_temp_3);
	int32_t unmarshaled_ascii_graphs_temp_4 = 0;
	unmarshaled_ascii_graphs_temp_4 = marshaled.___ascii_graphs_4;
	unmarshaled.set_ascii_graphs_4(unmarshaled_ascii_graphs_temp_4);
	int32_t unmarshaled_postscript_graphs_temp_5 = 0;
	unmarshaled_postscript_graphs_temp_5 = marshaled.___postscript_graphs_5;
	unmarshaled.set_postscript_graphs_5(unmarshaled_postscript_graphs_temp_5);
	int32_t unmarshaled_message_level_temp_6 = 0;
	unmarshaled_message_level_temp_6 = marshaled.___message_level_6;
	unmarshaled.set_message_level_6(unmarshaled_message_level_temp_6);
	int32_t unmarshaled_tempo_temp_7 = 0;
	unmarshaled_tempo_temp_7 = marshaled.___tempo_7;
	unmarshaled.set_tempo_7(unmarshaled_tempo_temp_7);
	int32_t unmarshaled_ring_bell_temp_8 = 0;
	unmarshaled_ring_bell_temp_8 = marshaled.___ring_bell_8;
	unmarshaled.set_ring_bell_8(unmarshaled_ring_bell_temp_8);
	int32_t unmarshaled_use_cscore_temp_9 = 0;
	unmarshaled_use_cscore_temp_9 = marshaled.___use_cscore_9;
	unmarshaled.set_use_cscore_9(unmarshaled_use_cscore_temp_9);
	int32_t unmarshaled_terminate_on_midi_temp_10 = 0;
	unmarshaled_terminate_on_midi_temp_10 = marshaled.___terminate_on_midi_10;
	unmarshaled.set_terminate_on_midi_10(unmarshaled_terminate_on_midi_temp_10);
	int32_t unmarshaled_heartbeat_temp_11 = 0;
	unmarshaled_heartbeat_temp_11 = marshaled.___heartbeat_11;
	unmarshaled.set_heartbeat_11(unmarshaled_heartbeat_temp_11);
	int32_t unmarshaled_defer_gen01_load_temp_12 = 0;
	unmarshaled_defer_gen01_load_temp_12 = marshaled.___defer_gen01_load_12;
	unmarshaled.set_defer_gen01_load_12(unmarshaled_defer_gen01_load_temp_12);
	int32_t unmarshaled_midi_key_temp_13 = 0;
	unmarshaled_midi_key_temp_13 = marshaled.___midi_key_13;
	unmarshaled.set_midi_key_13(unmarshaled_midi_key_temp_13);
	int32_t unmarshaled_midi_key_cps_temp_14 = 0;
	unmarshaled_midi_key_cps_temp_14 = marshaled.___midi_key_cps_14;
	unmarshaled.set_midi_key_cps_14(unmarshaled_midi_key_cps_temp_14);
	int32_t unmarshaled_midi_key_oct_temp_15 = 0;
	unmarshaled_midi_key_oct_temp_15 = marshaled.___midi_key_oct_15;
	unmarshaled.set_midi_key_oct_15(unmarshaled_midi_key_oct_temp_15);
	int32_t unmarshaled_midi_key_pch_temp_16 = 0;
	unmarshaled_midi_key_pch_temp_16 = marshaled.___midi_key_pch_16;
	unmarshaled.set_midi_key_pch_16(unmarshaled_midi_key_pch_temp_16);
	int32_t unmarshaled_midi_velocity_temp_17 = 0;
	unmarshaled_midi_velocity_temp_17 = marshaled.___midi_velocity_17;
	unmarshaled.set_midi_velocity_17(unmarshaled_midi_velocity_temp_17);
	int32_t unmarshaled_midi_velocity_amp_temp_18 = 0;
	unmarshaled_midi_velocity_amp_temp_18 = marshaled.___midi_velocity_amp_18;
	unmarshaled.set_midi_velocity_amp_18(unmarshaled_midi_velocity_amp_temp_18);
	int32_t unmarshaled_no_default_paths_temp_19 = 0;
	unmarshaled_no_default_paths_temp_19 = marshaled.___no_default_paths_19;
	unmarshaled.set_no_default_paths_19(unmarshaled_no_default_paths_temp_19);
	int32_t unmarshaled_number_of_threads_temp_20 = 0;
	unmarshaled_number_of_threads_temp_20 = marshaled.___number_of_threads_20;
	unmarshaled.set_number_of_threads_20(unmarshaled_number_of_threads_temp_20);
	int32_t unmarshaled_syntax_check_only_temp_21 = 0;
	unmarshaled_syntax_check_only_temp_21 = marshaled.___syntax_check_only_21;
	unmarshaled.set_syntax_check_only_21(unmarshaled_syntax_check_only_temp_21);
	int32_t unmarshaled_csd_line_counts_temp_22 = 0;
	unmarshaled_csd_line_counts_temp_22 = marshaled.___csd_line_counts_22;
	unmarshaled.set_csd_line_counts_22(unmarshaled_csd_line_counts_temp_22);
	int32_t unmarshaled_compute_weights_temp_23 = 0;
	unmarshaled_compute_weights_temp_23 = marshaled.___compute_weights_23;
	unmarshaled.set_compute_weights_23(unmarshaled_compute_weights_temp_23);
	int32_t unmarshaled_realtime_mode_temp_24 = 0;
	unmarshaled_realtime_mode_temp_24 = marshaled.___realtime_mode_24;
	unmarshaled.set_realtime_mode_24(unmarshaled_realtime_mode_temp_24);
	int32_t unmarshaled_sample_accurate_temp_25 = 0;
	unmarshaled_sample_accurate_temp_25 = marshaled.___sample_accurate_25;
	unmarshaled.set_sample_accurate_25(unmarshaled_sample_accurate_temp_25);
	double unmarshaled_sample_rate_override_temp_26 = 0.0;
	unmarshaled_sample_rate_override_temp_26 = marshaled.___sample_rate_override_26;
	unmarshaled.set_sample_rate_override_26(unmarshaled_sample_rate_override_temp_26);
	double unmarshaled_control_rate_override_temp_27 = 0.0;
	unmarshaled_control_rate_override_temp_27 = marshaled.___control_rate_override_27;
	unmarshaled.set_control_rate_override_27(unmarshaled_control_rate_override_temp_27);
	int32_t unmarshaled_nchnls_override_temp_28 = 0;
	unmarshaled_nchnls_override_temp_28 = marshaled.___nchnls_override_28;
	unmarshaled.set_nchnls_override_28(unmarshaled_nchnls_override_temp_28);
	int32_t unmarshaled_nchnls_i_override_temp_29 = 0;
	unmarshaled_nchnls_i_override_temp_29 = marshaled.___nchnls_i_override_29;
	unmarshaled.set_nchnls_i_override_29(unmarshaled_nchnls_i_override_temp_29);
	double unmarshaled_e0dbfs_override_temp_30 = 0.0;
	unmarshaled_e0dbfs_override_temp_30 = marshaled.___e0dbfs_override_30;
	unmarshaled.set_e0dbfs_override_30(unmarshaled_e0dbfs_override_temp_30);
	int32_t unmarshaled_daemon_temp_31 = 0;
	unmarshaled_daemon_temp_31 = marshaled.___daemon_31;
	unmarshaled.set_daemon_31(unmarshaled_daemon_temp_31);
	int32_t unmarshaled_ksmps_override_temp_32 = 0;
	unmarshaled_ksmps_override_temp_32 = marshaled.___ksmps_override_32;
	unmarshaled.set_ksmps_override_32(unmarshaled_ksmps_override_temp_32);
	int32_t unmarshaled_FFT_library_temp_33 = 0;
	unmarshaled_FFT_library_temp_33 = marshaled.___FFT_library_33;
	unmarshaled.set_FFT_library_33(unmarshaled_FFT_library_temp_33);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/CSOUND_PARAMS
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_pinvoke_cleanup(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CsoundUnityBridge/CSOUND_PARAMS
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_com(const CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F& unmarshaled, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_com& marshaled)
{
	marshaled.___debug_mode_0 = unmarshaled.get_debug_mode_0();
	marshaled.___buffer_frames_1 = unmarshaled.get_buffer_frames_1();
	marshaled.___hardware_buffer_frames_2 = unmarshaled.get_hardware_buffer_frames_2();
	marshaled.___displays_3 = unmarshaled.get_displays_3();
	marshaled.___ascii_graphs_4 = unmarshaled.get_ascii_graphs_4();
	marshaled.___postscript_graphs_5 = unmarshaled.get_postscript_graphs_5();
	marshaled.___message_level_6 = unmarshaled.get_message_level_6();
	marshaled.___tempo_7 = unmarshaled.get_tempo_7();
	marshaled.___ring_bell_8 = unmarshaled.get_ring_bell_8();
	marshaled.___use_cscore_9 = unmarshaled.get_use_cscore_9();
	marshaled.___terminate_on_midi_10 = unmarshaled.get_terminate_on_midi_10();
	marshaled.___heartbeat_11 = unmarshaled.get_heartbeat_11();
	marshaled.___defer_gen01_load_12 = unmarshaled.get_defer_gen01_load_12();
	marshaled.___midi_key_13 = unmarshaled.get_midi_key_13();
	marshaled.___midi_key_cps_14 = unmarshaled.get_midi_key_cps_14();
	marshaled.___midi_key_oct_15 = unmarshaled.get_midi_key_oct_15();
	marshaled.___midi_key_pch_16 = unmarshaled.get_midi_key_pch_16();
	marshaled.___midi_velocity_17 = unmarshaled.get_midi_velocity_17();
	marshaled.___midi_velocity_amp_18 = unmarshaled.get_midi_velocity_amp_18();
	marshaled.___no_default_paths_19 = unmarshaled.get_no_default_paths_19();
	marshaled.___number_of_threads_20 = unmarshaled.get_number_of_threads_20();
	marshaled.___syntax_check_only_21 = unmarshaled.get_syntax_check_only_21();
	marshaled.___csd_line_counts_22 = unmarshaled.get_csd_line_counts_22();
	marshaled.___compute_weights_23 = unmarshaled.get_compute_weights_23();
	marshaled.___realtime_mode_24 = unmarshaled.get_realtime_mode_24();
	marshaled.___sample_accurate_25 = unmarshaled.get_sample_accurate_25();
	marshaled.___sample_rate_override_26 = unmarshaled.get_sample_rate_override_26();
	marshaled.___control_rate_override_27 = unmarshaled.get_control_rate_override_27();
	marshaled.___nchnls_override_28 = unmarshaled.get_nchnls_override_28();
	marshaled.___nchnls_i_override_29 = unmarshaled.get_nchnls_i_override_29();
	marshaled.___e0dbfs_override_30 = unmarshaled.get_e0dbfs_override_30();
	marshaled.___daemon_31 = unmarshaled.get_daemon_31();
	marshaled.___ksmps_override_32 = unmarshaled.get_ksmps_override_32();
	marshaled.___FFT_library_33 = unmarshaled.get_FFT_library_33();
}
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_com_back(const CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_com& marshaled, CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F& unmarshaled)
{
	int32_t unmarshaled_debug_mode_temp_0 = 0;
	unmarshaled_debug_mode_temp_0 = marshaled.___debug_mode_0;
	unmarshaled.set_debug_mode_0(unmarshaled_debug_mode_temp_0);
	int32_t unmarshaled_buffer_frames_temp_1 = 0;
	unmarshaled_buffer_frames_temp_1 = marshaled.___buffer_frames_1;
	unmarshaled.set_buffer_frames_1(unmarshaled_buffer_frames_temp_1);
	int32_t unmarshaled_hardware_buffer_frames_temp_2 = 0;
	unmarshaled_hardware_buffer_frames_temp_2 = marshaled.___hardware_buffer_frames_2;
	unmarshaled.set_hardware_buffer_frames_2(unmarshaled_hardware_buffer_frames_temp_2);
	int32_t unmarshaled_displays_temp_3 = 0;
	unmarshaled_displays_temp_3 = marshaled.___displays_3;
	unmarshaled.set_displays_3(unmarshaled_displays_temp_3);
	int32_t unmarshaled_ascii_graphs_temp_4 = 0;
	unmarshaled_ascii_graphs_temp_4 = marshaled.___ascii_graphs_4;
	unmarshaled.set_ascii_graphs_4(unmarshaled_ascii_graphs_temp_4);
	int32_t unmarshaled_postscript_graphs_temp_5 = 0;
	unmarshaled_postscript_graphs_temp_5 = marshaled.___postscript_graphs_5;
	unmarshaled.set_postscript_graphs_5(unmarshaled_postscript_graphs_temp_5);
	int32_t unmarshaled_message_level_temp_6 = 0;
	unmarshaled_message_level_temp_6 = marshaled.___message_level_6;
	unmarshaled.set_message_level_6(unmarshaled_message_level_temp_6);
	int32_t unmarshaled_tempo_temp_7 = 0;
	unmarshaled_tempo_temp_7 = marshaled.___tempo_7;
	unmarshaled.set_tempo_7(unmarshaled_tempo_temp_7);
	int32_t unmarshaled_ring_bell_temp_8 = 0;
	unmarshaled_ring_bell_temp_8 = marshaled.___ring_bell_8;
	unmarshaled.set_ring_bell_8(unmarshaled_ring_bell_temp_8);
	int32_t unmarshaled_use_cscore_temp_9 = 0;
	unmarshaled_use_cscore_temp_9 = marshaled.___use_cscore_9;
	unmarshaled.set_use_cscore_9(unmarshaled_use_cscore_temp_9);
	int32_t unmarshaled_terminate_on_midi_temp_10 = 0;
	unmarshaled_terminate_on_midi_temp_10 = marshaled.___terminate_on_midi_10;
	unmarshaled.set_terminate_on_midi_10(unmarshaled_terminate_on_midi_temp_10);
	int32_t unmarshaled_heartbeat_temp_11 = 0;
	unmarshaled_heartbeat_temp_11 = marshaled.___heartbeat_11;
	unmarshaled.set_heartbeat_11(unmarshaled_heartbeat_temp_11);
	int32_t unmarshaled_defer_gen01_load_temp_12 = 0;
	unmarshaled_defer_gen01_load_temp_12 = marshaled.___defer_gen01_load_12;
	unmarshaled.set_defer_gen01_load_12(unmarshaled_defer_gen01_load_temp_12);
	int32_t unmarshaled_midi_key_temp_13 = 0;
	unmarshaled_midi_key_temp_13 = marshaled.___midi_key_13;
	unmarshaled.set_midi_key_13(unmarshaled_midi_key_temp_13);
	int32_t unmarshaled_midi_key_cps_temp_14 = 0;
	unmarshaled_midi_key_cps_temp_14 = marshaled.___midi_key_cps_14;
	unmarshaled.set_midi_key_cps_14(unmarshaled_midi_key_cps_temp_14);
	int32_t unmarshaled_midi_key_oct_temp_15 = 0;
	unmarshaled_midi_key_oct_temp_15 = marshaled.___midi_key_oct_15;
	unmarshaled.set_midi_key_oct_15(unmarshaled_midi_key_oct_temp_15);
	int32_t unmarshaled_midi_key_pch_temp_16 = 0;
	unmarshaled_midi_key_pch_temp_16 = marshaled.___midi_key_pch_16;
	unmarshaled.set_midi_key_pch_16(unmarshaled_midi_key_pch_temp_16);
	int32_t unmarshaled_midi_velocity_temp_17 = 0;
	unmarshaled_midi_velocity_temp_17 = marshaled.___midi_velocity_17;
	unmarshaled.set_midi_velocity_17(unmarshaled_midi_velocity_temp_17);
	int32_t unmarshaled_midi_velocity_amp_temp_18 = 0;
	unmarshaled_midi_velocity_amp_temp_18 = marshaled.___midi_velocity_amp_18;
	unmarshaled.set_midi_velocity_amp_18(unmarshaled_midi_velocity_amp_temp_18);
	int32_t unmarshaled_no_default_paths_temp_19 = 0;
	unmarshaled_no_default_paths_temp_19 = marshaled.___no_default_paths_19;
	unmarshaled.set_no_default_paths_19(unmarshaled_no_default_paths_temp_19);
	int32_t unmarshaled_number_of_threads_temp_20 = 0;
	unmarshaled_number_of_threads_temp_20 = marshaled.___number_of_threads_20;
	unmarshaled.set_number_of_threads_20(unmarshaled_number_of_threads_temp_20);
	int32_t unmarshaled_syntax_check_only_temp_21 = 0;
	unmarshaled_syntax_check_only_temp_21 = marshaled.___syntax_check_only_21;
	unmarshaled.set_syntax_check_only_21(unmarshaled_syntax_check_only_temp_21);
	int32_t unmarshaled_csd_line_counts_temp_22 = 0;
	unmarshaled_csd_line_counts_temp_22 = marshaled.___csd_line_counts_22;
	unmarshaled.set_csd_line_counts_22(unmarshaled_csd_line_counts_temp_22);
	int32_t unmarshaled_compute_weights_temp_23 = 0;
	unmarshaled_compute_weights_temp_23 = marshaled.___compute_weights_23;
	unmarshaled.set_compute_weights_23(unmarshaled_compute_weights_temp_23);
	int32_t unmarshaled_realtime_mode_temp_24 = 0;
	unmarshaled_realtime_mode_temp_24 = marshaled.___realtime_mode_24;
	unmarshaled.set_realtime_mode_24(unmarshaled_realtime_mode_temp_24);
	int32_t unmarshaled_sample_accurate_temp_25 = 0;
	unmarshaled_sample_accurate_temp_25 = marshaled.___sample_accurate_25;
	unmarshaled.set_sample_accurate_25(unmarshaled_sample_accurate_temp_25);
	double unmarshaled_sample_rate_override_temp_26 = 0.0;
	unmarshaled_sample_rate_override_temp_26 = marshaled.___sample_rate_override_26;
	unmarshaled.set_sample_rate_override_26(unmarshaled_sample_rate_override_temp_26);
	double unmarshaled_control_rate_override_temp_27 = 0.0;
	unmarshaled_control_rate_override_temp_27 = marshaled.___control_rate_override_27;
	unmarshaled.set_control_rate_override_27(unmarshaled_control_rate_override_temp_27);
	int32_t unmarshaled_nchnls_override_temp_28 = 0;
	unmarshaled_nchnls_override_temp_28 = marshaled.___nchnls_override_28;
	unmarshaled.set_nchnls_override_28(unmarshaled_nchnls_override_temp_28);
	int32_t unmarshaled_nchnls_i_override_temp_29 = 0;
	unmarshaled_nchnls_i_override_temp_29 = marshaled.___nchnls_i_override_29;
	unmarshaled.set_nchnls_i_override_29(unmarshaled_nchnls_i_override_temp_29);
	double unmarshaled_e0dbfs_override_temp_30 = 0.0;
	unmarshaled_e0dbfs_override_temp_30 = marshaled.___e0dbfs_override_30;
	unmarshaled.set_e0dbfs_override_30(unmarshaled_e0dbfs_override_temp_30);
	int32_t unmarshaled_daemon_temp_31 = 0;
	unmarshaled_daemon_temp_31 = marshaled.___daemon_31;
	unmarshaled.set_daemon_31(unmarshaled_daemon_temp_31);
	int32_t unmarshaled_ksmps_override_temp_32 = 0;
	unmarshaled_ksmps_override_temp_32 = marshaled.___ksmps_override_32;
	unmarshaled.set_ksmps_override_32(unmarshaled_ksmps_override_temp_32);
	int32_t unmarshaled_FFT_library_temp_33 = 0;
	unmarshaled_FFT_library_temp_33 = marshaled.___FFT_library_33;
	unmarshaled.set_FFT_library_33(unmarshaled_FFT_library_temp_33);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/CSOUND_PARAMS
IL2CPP_EXTERN_C void CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshal_com_cleanup(CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F_marshaled_com& marshaled)
{
}
// System.Void CsoundUnityBridge/CSOUND_PARAMS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CSOUND_PARAMS__ctor_mF71A292C6ECED74DF43FEB5BB9B1B7BDAF3476FA (CSOUND_PARAMS_tEE1571222B0C587D895437A10BAD7A29B17EE53F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/ChannelHints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelHints__ctor_mC2B27F371A5C763D90C2829B3D0F31C179667E66 (ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * __this, const RuntimeMethod* method)
{
	{
		// public ChannelHints() : this(ChannelBehavior.None, 0, 0, 0)
		ChannelHints__ctor_m3582AE794DDB3B700DDE400A2DC1DF73AA282FF8(__this, 0, (0.0), (0.0), (0.0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CsoundUnityBridge/ChannelHints::.ctor(CsoundUnityBridge/ChannelBehavior,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelHints__ctor_m3582AE794DDB3B700DDE400A2DC1DF73AA282FF8 (ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * __this, int32_t ___ibehav0, double ___idflt1, double ___imin2, double ___imax3, const RuntimeMethod* method)
{
	{
		// public ChannelHints(ChannelBehavior ibehav, double idflt, double imin, double imax)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// behav = ibehav;
		int32_t L_0 = ___ibehav0;
		__this->set_behav_0(L_0);
		// dflt = idflt;
		double L_1 = ___idflt1;
		__this->set_dflt_1(L_1);
		// min = imin;
		double L_2 = ___imin2;
		__this->set_min_2(L_2);
		// max = imax;
		double L_3 = ___imax3;
		__this->set_max_3(L_3);
		// x = 0;
		__this->set_x_4(0);
		// y = 0;
		__this->set_y_5(0);
		// width = 0;
		__this->set_width_6(0);
		// height = 0;
		__this->set_height_7(0);
		// attributes = null;
		__this->set_attributes_8((String_t*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/ChannelHintsProxy::.ctor(CsoundUnityBridge/ChannelHints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelHintsProxy__ctor_mF3BBD1E4606B03E64FE794BC1F934A79AD73DB6F (ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B * __this, ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * ___hints0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// behav = (int)hints.behav;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_0 = ___hints0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_behav_0();
		__this->set_behav_0(L_1);
		// dflt = hints.dflt; min = hints.min; max = hints.max;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_2 = ___hints0;
		NullCheck(L_2);
		double L_3 = L_2->get_dflt_1();
		__this->set_dflt_1(L_3);
		// dflt = hints.dflt; min = hints.min; max = hints.max;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_4 = ___hints0;
		NullCheck(L_4);
		double L_5 = L_4->get_min_2();
		__this->set_min_2(L_5);
		// dflt = hints.dflt; min = hints.min; max = hints.max;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_6 = ___hints0;
		NullCheck(L_6);
		double L_7 = L_6->get_max_3();
		__this->set_max_3(L_7);
		// x = hints.x; y = hints.y; height = hints.height; width = hints.width;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_8 = ___hints0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_x_4();
		__this->set_x_4(L_9);
		// x = hints.x; y = hints.y; height = hints.height; width = hints.width;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_10 = ___hints0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_y_5();
		__this->set_y_5(L_11);
		// x = hints.x; y = hints.y; height = hints.height; width = hints.width;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_12 = ___hints0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_height_7();
		__this->set_height_7(L_13);
		// x = hints.x; y = hints.y; height = hints.height; width = hints.width;
		ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * L_14 = ___hints0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_width_6();
		__this->set_width_6(L_15);
		// attributes = IntPtr.Zero;
		__this->set_attributes_8((intptr_t)(0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ChannelHintsProxy__ctor_mF3BBD1E4606B03E64FE794BC1F934A79AD73DB6F_AdjustorThunk (RuntimeObject * __this, ChannelHints_tE587B7E4BE00D00F9A90354182AEABE896C28301 * ___hints0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B * _thisAdjusted = reinterpret_cast<ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B *>(__this + _offset);
	ChannelHintsProxy__ctor_mF3BBD1E4606B03E64FE794BC1F934A79AD73DB6F(_thisAdjusted, ___hints0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/ChannelInfo::.ctor(System.String,CsoundUnityBridge/ChannelType,CsoundUnityBridge/ChannelDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelInfo__ctor_mD7C0E9940A33872B8E3C52D5392EFF9C8907AE45 (ChannelInfo_tA7C62FA59BD0565226A134B6A638469490C13146 * __this, String_t* ____name0, int32_t ____type1, int32_t ____direction2, const RuntimeMethod* method)
{
	{
		// public ChannelInfo(string _name, ChannelType _type, ChannelDirection _direction)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Name = _name;
		String_t* L_0 = ____name0;
		__this->set_Name_0(L_0);
		// Type = _type;
		int32_t L_1 = ____type1;
		__this->set_Type_1(L_1);
		// Direction = _direction;
		int32_t L_2 = ____direction2;
		__this->set_Direction_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CsoundUnityBridge/ChannelInfoProxy
IL2CPP_EXTERN_C void ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshal_pinvoke(const ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496& unmarshaled, ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = unmarshaled.get_name_0();
	marshaled.___type_1 = unmarshaled.get_type_1();
	marshaled.___hints_2 = unmarshaled.get_hints_2();
}
IL2CPP_EXTERN_C void ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshal_pinvoke_back(const ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_pinvoke& marshaled, ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496& unmarshaled)
{
	intptr_t unmarshaled_name_temp_0;
	memset((&unmarshaled_name_temp_0), 0, sizeof(unmarshaled_name_temp_0));
	unmarshaled_name_temp_0 = marshaled.___name_0;
	unmarshaled.set_name_0(unmarshaled_name_temp_0);
	int32_t unmarshaled_type_temp_1 = 0;
	unmarshaled_type_temp_1 = marshaled.___type_1;
	unmarshaled.set_type_1(unmarshaled_type_temp_1);
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  unmarshaled_hints_temp_2;
	memset((&unmarshaled_hints_temp_2), 0, sizeof(unmarshaled_hints_temp_2));
	unmarshaled_hints_temp_2 = marshaled.___hints_2;
	unmarshaled.set_hints_2(unmarshaled_hints_temp_2);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/ChannelInfoProxy
IL2CPP_EXTERN_C void ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshal_pinvoke_cleanup(ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CsoundUnityBridge/ChannelInfoProxy
IL2CPP_EXTERN_C void ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshal_com(const ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496& unmarshaled, ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_com& marshaled)
{
	marshaled.___name_0 = unmarshaled.get_name_0();
	marshaled.___type_1 = unmarshaled.get_type_1();
	marshaled.___hints_2 = unmarshaled.get_hints_2();
}
IL2CPP_EXTERN_C void ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshal_com_back(const ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_com& marshaled, ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496& unmarshaled)
{
	intptr_t unmarshaled_name_temp_0;
	memset((&unmarshaled_name_temp_0), 0, sizeof(unmarshaled_name_temp_0));
	unmarshaled_name_temp_0 = marshaled.___name_0;
	unmarshaled.set_name_0(unmarshaled_name_temp_0);
	int32_t unmarshaled_type_temp_1 = 0;
	unmarshaled_type_temp_1 = marshaled.___type_1;
	unmarshaled.set_type_1(unmarshaled_type_temp_1);
	ChannelHintsProxy_t1CC047664D48ED1DCBD7E2F08F6E015DD4D4549B  unmarshaled_hints_temp_2;
	memset((&unmarshaled_hints_temp_2), 0, sizeof(unmarshaled_hints_temp_2));
	unmarshaled_hints_temp_2 = marshaled.___hints_2;
	unmarshaled.set_hints_2(unmarshaled_hints_temp_2);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/ChannelInfoProxy
IL2CPP_EXTERN_C void ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshal_com_cleanup(ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496_marshaled_com& marshaled)
{
}
// System.Void CsoundUnityBridge/ChannelInfoProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelInfoProxy__ctor_mA5D64A4762745FD3CE5277F1153C1CFC09A98B60 (ChannelInfoProxy_t7806AC83F41D373837A8089AA9819EB4872EA496 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/Csound6SenseEventCallbackHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Csound6SenseEventCallbackHandler__ctor_mB5E928911A84F3884D9DD3273DD4DE960F0C86FA (Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CsoundUnityBridge/Csound6SenseEventCallbackHandler::Invoke(System.Object,CsoundUnityBridge/Csound6SenseEventsArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Csound6SenseEventCallbackHandler_Invoke_m160E26A761F2D0B3CF67C090C6796F9755F95B4A (Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * __this, RuntimeObject * ___sender0, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CsoundUnityBridge/Csound6SenseEventCallbackHandler::BeginInvoke(System.Object,CsoundUnityBridge/Csound6SenseEventsArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Csound6SenseEventCallbackHandler_BeginInvoke_m87B90DCEEAE7373249016CCDD5EFF417F4FD5CA8 (Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * __this, RuntimeObject * ___sender0, Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void CsoundUnityBridge/Csound6SenseEventCallbackHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Csound6SenseEventCallbackHandler_EndInvoke_m33B743C4B3FAC576930EBBA9149B98B5F258E07B (Csound6SenseEventCallbackHandler_tD9F339D21905D227316CAFA90FD7707DED1F295F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/Csound6SenseEventsArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Csound6SenseEventsArgs__ctor_m17104F71BCD18A505F83FDB775E2F38DB4E5F52B (Csound6SenseEventsArgs_t4D033C4B04EAE27090AC01797660CA689DE13DC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CsoundUnityBridge/NamedGenProxy
IL2CPP_EXTERN_C void NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshal_pinvoke(const NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF& unmarshaled, NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = unmarshaled.get_name_0();
	marshaled.___genum_1 = unmarshaled.get_genum_1();
	marshaled.___next_2 = unmarshaled.get_next_2();
}
IL2CPP_EXTERN_C void NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshal_pinvoke_back(const NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_pinvoke& marshaled, NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF& unmarshaled)
{
	intptr_t unmarshaled_name_temp_0;
	memset((&unmarshaled_name_temp_0), 0, sizeof(unmarshaled_name_temp_0));
	unmarshaled_name_temp_0 = marshaled.___name_0;
	unmarshaled.set_name_0(unmarshaled_name_temp_0);
	int32_t unmarshaled_genum_temp_1 = 0;
	unmarshaled_genum_temp_1 = marshaled.___genum_1;
	unmarshaled.set_genum_1(unmarshaled_genum_temp_1);
	intptr_t unmarshaled_next_temp_2;
	memset((&unmarshaled_next_temp_2), 0, sizeof(unmarshaled_next_temp_2));
	unmarshaled_next_temp_2 = marshaled.___next_2;
	unmarshaled.set_next_2(unmarshaled_next_temp_2);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/NamedGenProxy
IL2CPP_EXTERN_C void NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshal_pinvoke_cleanup(NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CsoundUnityBridge/NamedGenProxy
IL2CPP_EXTERN_C void NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshal_com(const NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF& unmarshaled, NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_com& marshaled)
{
	marshaled.___name_0 = unmarshaled.get_name_0();
	marshaled.___genum_1 = unmarshaled.get_genum_1();
	marshaled.___next_2 = unmarshaled.get_next_2();
}
IL2CPP_EXTERN_C void NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshal_com_back(const NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_com& marshaled, NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF& unmarshaled)
{
	intptr_t unmarshaled_name_temp_0;
	memset((&unmarshaled_name_temp_0), 0, sizeof(unmarshaled_name_temp_0));
	unmarshaled_name_temp_0 = marshaled.___name_0;
	unmarshaled.set_name_0(unmarshaled_name_temp_0);
	int32_t unmarshaled_genum_temp_1 = 0;
	unmarshaled_genum_temp_1 = marshaled.___genum_1;
	unmarshaled.set_genum_1(unmarshaled_genum_temp_1);
	intptr_t unmarshaled_next_temp_2;
	memset((&unmarshaled_next_temp_2), 0, sizeof(unmarshaled_next_temp_2));
	unmarshaled_next_temp_2 = marshaled.___next_2;
	unmarshaled.set_next_2(unmarshaled_next_temp_2);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/NamedGenProxy
IL2CPP_EXTERN_C void NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshal_com_cleanup(NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF_marshaled_com& marshaled)
{
}
// System.Void CsoundUnityBridge/NamedGenProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedGenProxy__ctor_mBD4BAF70EEEA1C70E00CA2897C9ACCABDE91C02C (NamedGenProxy_t6E39BE4460C8C1220332B39616306F2BBAC5B9CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CsoundUnityBridge/OpcodeArgumentTypes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpcodeArgumentTypes__ctor_mFA21E87766997AFBDB6C971BA4D4E217715EF697 (OpcodeArgumentTypes_t401DD613702007175F7D5E2F9FEF4F3329EA72A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CsoundUnityBridge/OpcodeListProxy
IL2CPP_EXTERN_C void OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshal_pinvoke(const OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224& unmarshaled, OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_pinvoke& marshaled)
{
	marshaled.___opname_0 = unmarshaled.get_opname_0();
	marshaled.___outtypes_1 = unmarshaled.get_outtypes_1();
	marshaled.___intypes_2 = unmarshaled.get_intypes_2();
	marshaled.___flags_3 = unmarshaled.get_flags_3();
}
IL2CPP_EXTERN_C void OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshal_pinvoke_back(const OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_pinvoke& marshaled, OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224& unmarshaled)
{
	intptr_t unmarshaled_opname_temp_0;
	memset((&unmarshaled_opname_temp_0), 0, sizeof(unmarshaled_opname_temp_0));
	unmarshaled_opname_temp_0 = marshaled.___opname_0;
	unmarshaled.set_opname_0(unmarshaled_opname_temp_0);
	intptr_t unmarshaled_outtypes_temp_1;
	memset((&unmarshaled_outtypes_temp_1), 0, sizeof(unmarshaled_outtypes_temp_1));
	unmarshaled_outtypes_temp_1 = marshaled.___outtypes_1;
	unmarshaled.set_outtypes_1(unmarshaled_outtypes_temp_1);
	intptr_t unmarshaled_intypes_temp_2;
	memset((&unmarshaled_intypes_temp_2), 0, sizeof(unmarshaled_intypes_temp_2));
	unmarshaled_intypes_temp_2 = marshaled.___intypes_2;
	unmarshaled.set_intypes_2(unmarshaled_intypes_temp_2);
	int32_t unmarshaled_flags_temp_3 = 0;
	unmarshaled_flags_temp_3 = marshaled.___flags_3;
	unmarshaled.set_flags_3(unmarshaled_flags_temp_3);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/OpcodeListProxy
IL2CPP_EXTERN_C void OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshal_pinvoke_cleanup(OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CsoundUnityBridge/OpcodeListProxy
IL2CPP_EXTERN_C void OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshal_com(const OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224& unmarshaled, OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_com& marshaled)
{
	marshaled.___opname_0 = unmarshaled.get_opname_0();
	marshaled.___outtypes_1 = unmarshaled.get_outtypes_1();
	marshaled.___intypes_2 = unmarshaled.get_intypes_2();
	marshaled.___flags_3 = unmarshaled.get_flags_3();
}
IL2CPP_EXTERN_C void OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshal_com_back(const OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_com& marshaled, OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224& unmarshaled)
{
	intptr_t unmarshaled_opname_temp_0;
	memset((&unmarshaled_opname_temp_0), 0, sizeof(unmarshaled_opname_temp_0));
	unmarshaled_opname_temp_0 = marshaled.___opname_0;
	unmarshaled.set_opname_0(unmarshaled_opname_temp_0);
	intptr_t unmarshaled_outtypes_temp_1;
	memset((&unmarshaled_outtypes_temp_1), 0, sizeof(unmarshaled_outtypes_temp_1));
	unmarshaled_outtypes_temp_1 = marshaled.___outtypes_1;
	unmarshaled.set_outtypes_1(unmarshaled_outtypes_temp_1);
	intptr_t unmarshaled_intypes_temp_2;
	memset((&unmarshaled_intypes_temp_2), 0, sizeof(unmarshaled_intypes_temp_2));
	unmarshaled_intypes_temp_2 = marshaled.___intypes_2;
	unmarshaled.set_intypes_2(unmarshaled_intypes_temp_2);
	int32_t unmarshaled_flags_temp_3 = 0;
	unmarshaled_flags_temp_3 = marshaled.___flags_3;
	unmarshaled.set_flags_3(unmarshaled_flags_temp_3);
}
// Conversion method for clean up from marshalling of: CsoundUnityBridge/OpcodeListProxy
IL2CPP_EXTERN_C void OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshal_com_cleanup(OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224_marshaled_com& marshaled)
{
}
// System.Void CsoundUnityBridge/OpcodeListProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpcodeListProxy__ctor_m195AB16A167686D5710FB2F4208E6EB179AF7A4C (OpcodeListProxy_tEFCDCCFD90F1C97B115FA67C40E048251E999224 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * CsoundUnity_get_channels_m99A89DA44CF92F0DE4381FD9C48EDC360A604936_inline (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public List<CsoundChannelController> channels { get => _channels; }
		List_1_tF2FE6653EF97F55C4251FEC88EFD3E185D97B42E * L_0 = __this->get__channels_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * CsoundUnity_get_availableAudioChannels_m1286F5171116CA5F72E6F08BF7712E8C5C592B8A_inline (CsoundUnity_t8BC660AEA073EA8049B604D3C399EB25589B9514 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> availableAudioChannels { get => _availableAudioChannels; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get__availableAudioChannels_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CsoundUnityBridge_CompiledWithoutError_mBDC47E361F054835CF04FD5638FA75D3E8E87124_inline (CsoundUnityBridge_t8B6FB89B10DBC82035505B5FA1F34BE3EEC8E217 * __this, const RuntimeMethod* method)
{
	{
		// return compiledOk;
		bool L_0 = __this->get_compiledOk_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mE5FA7EDE50D1DCEF9C1100359AA1614607279BAC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_0;
	}
}
