//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.5
//
// <auto-generated>
//
// Generated from file `OdometryMelex.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __OdometryMelex_h__
#define __OdometryMelex_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/GCObject.h>
#include <Ice/Value.h>
#include <Ice/Incoming.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <Ice/ExceptionHelpers.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 >= 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 5
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace RoboCompOdometryMelex
{

class OdometryMelex;
class OdometryMelexPrx;

}

namespace RoboCompOdometryMelex
{

class HardwareFailedException : public ::Ice::UserExceptionHelper<HardwareFailedException, ::Ice::UserException>
{
public:

    virtual ~HardwareFailedException();

    HardwareFailedException(const HardwareFailedException&) = default;

    HardwareFailedException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    HardwareFailedException(const ::std::string& what) :
        what(what)
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    ::std::string what;
};

/// \cond INTERNAL
static HardwareFailedException _iceS_HardwareFailedException_init;
/// \endcond

enum class OdometryStates : unsigned char
{
    Moving,
    Stopped,
    Disconnected
};

struct TOdometry
{
    float vel;
    float steer;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const float&, const float&> ice_tuple() const
    {
        return std::tie(vel, steer);
    }
};

using Ice::operator<;
using Ice::operator<=;
using Ice::operator>;
using Ice::operator>=;
using Ice::operator==;
using Ice::operator!=;

}

namespace RoboCompOdometryMelex
{

class OdometryMelex : public virtual ::Ice::Object
{
public:

    using ProxyType = OdometryMelexPrx;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(::std::string id, const ::Ice::Current& current) const override;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector<::std::string> ice_ids(const ::Ice::Current& current) const override;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual ::std::string ice_id(const ::Ice::Current& current) const override;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual TOdometry getOdometryState(const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_getOdometryState(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace RoboCompOdometryMelex
{

class OdometryMelexPrx : public virtual ::Ice::Proxy<OdometryMelexPrx, ::Ice::ObjectPrx>
{
public:

    TOdometry getOdometryState(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::RoboCompOdometryMelex::TOdometry>(true, this, &OdometryMelexPrx::_iceI_getOdometryState, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto getOdometryStateAsync(const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::RoboCompOdometryMelex::TOdometry>>().get_future())
    {
        return _makePromiseOutgoing<::RoboCompOdometryMelex::TOdometry, P>(false, this, &OdometryMelexPrx::_iceI_getOdometryState, context);
    }

    ::std::function<void()>
    getOdometryStateAsync(::std::function<void(::RoboCompOdometryMelex::TOdometry)> response,
                          ::std::function<void(::std::exception_ptr)> ex = nullptr,
                          ::std::function<void(bool)> sent = nullptr,
                          const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::RoboCompOdometryMelex::TOdometry>(std::move(response), std::move(ex), std::move(sent), this, &RoboCompOdometryMelex::OdometryMelexPrx::_iceI_getOdometryState, context);
    }

    /// \cond INTERNAL
    void _iceI_getOdometryState(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompOdometryMelex::TOdometry>>&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    OdometryMelexPrx() = default;
    friend ::std::shared_ptr<OdometryMelexPrx> IceInternal::createProxy<OdometryMelexPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamReader<::RoboCompOdometryMelex::HardwareFailedException, S>
{
    static void read(S* istr, ::RoboCompOdometryMelex::HardwareFailedException& v)
    {
        istr->readAll(v.what);
    }
};

template<>
struct StreamableTraits< ::RoboCompOdometryMelex::OdometryStates>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

template<>
struct StreamableTraits<::RoboCompOdometryMelex::TOdometry>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 8;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamReader<::RoboCompOdometryMelex::TOdometry, S>
{
    static void read(S* istr, ::RoboCompOdometryMelex::TOdometry& v)
    {
        istr->readAll(v.vel, v.steer);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace RoboCompOdometryMelex
{

using OdometryMelexPtr = ::std::shared_ptr<OdometryMelex>;
using OdometryMelexPrxPtr = ::std::shared_ptr<OdometryMelexPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace RoboCompOdometryMelex
{

class OdometryMelex;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< OdometryMelex>&);
::IceProxy::Ice::Object* upCast(OdometryMelex*);
/// \endcond

}

}

namespace RoboCompOdometryMelex
{

class OdometryMelex;
/// \cond INTERNAL
::Ice::Object* upCast(OdometryMelex*);
/// \endcond
typedef ::IceInternal::Handle< OdometryMelex> OdometryMelexPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompOdometryMelex::OdometryMelex> OdometryMelexPrx;
typedef OdometryMelexPrx OdometryMelexPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(OdometryMelexPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace RoboCompOdometryMelex
{

class HardwareFailedException : public ::Ice::UserException
{
public:

    HardwareFailedException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit HardwareFailedException(const ::std::string& what);
    virtual ~HardwareFailedException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual HardwareFailedException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

    ::std::string what;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

/// \cond INTERNAL
static HardwareFailedException _iceS_HardwareFailedException_init;
/// \endcond

enum OdometryStates
{
    Moving,
    Stopped,
    Disconnected
};

struct TOdometry
{
    ::Ice::Float vel;
    ::Ice::Float steer;
};

}

namespace RoboCompOdometryMelex
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 * Create a wrapper instance by calling ::RoboCompOdometryMelex::newCallback_OdometryMelex_getOdometryState.
 */
class Callback_OdometryMelex_getOdometryState_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_OdometryMelex_getOdometryState_Base> Callback_OdometryMelex_getOdometryStatePtr;

}

namespace IceProxy
{

namespace RoboCompOdometryMelex
{

class OdometryMelex : public virtual ::Ice::Proxy<OdometryMelex, ::IceProxy::Ice::Object>
{
public:

    ::RoboCompOdometryMelex::TOdometry getOdometryState(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_getOdometryState(_iceI_begin_getOdometryState(context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_getOdometryState(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_getOdometryState(context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getOdometryState(const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getOdometryState(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getOdometryState(const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getOdometryState(context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getOdometryState(const ::RoboCompOdometryMelex::Callback_OdometryMelex_getOdometryStatePtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getOdometryState(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getOdometryState(const ::Ice::Context& context, const ::RoboCompOdometryMelex::Callback_OdometryMelex_getOdometryStatePtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getOdometryState(context, cb, cookie);
    }

    ::RoboCompOdometryMelex::TOdometry end_getOdometryState(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_getOdometryState(const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    /**
     * Obtains the Slice type ID corresponding to this interface.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

}

}

namespace RoboCompOdometryMelex
{

class OdometryMelex : public virtual ::Ice::Object
{
public:

    typedef OdometryMelexPrx ProxyType;
    typedef OdometryMelexPtr PointerType;

    virtual ~OdometryMelex();

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual TOdometry getOdometryState(const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_getOdometryState(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond
};

/// \cond INTERNAL
inline bool operator==(const OdometryMelex& lhs, const OdometryMelex& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const OdometryMelex& lhs, const OdometryMelex& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::RoboCompOdometryMelex::HardwareFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<typename S>
struct StreamWriter< ::RoboCompOdometryMelex::HardwareFailedException, S>
{
    static void write(S* ostr, const ::RoboCompOdometryMelex::HardwareFailedException& v)
    {
        ostr->write(v.what);
    }
};

template<typename S>
struct StreamReader< ::RoboCompOdometryMelex::HardwareFailedException, S>
{
    static void read(S* istr, ::RoboCompOdometryMelex::HardwareFailedException& v)
    {
        istr->read(v.what);
    }
};

template<>
struct StreamableTraits< ::RoboCompOdometryMelex::OdometryStates>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

template<>
struct StreamableTraits< ::RoboCompOdometryMelex::TOdometry>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 8;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamWriter< ::RoboCompOdometryMelex::TOdometry, S>
{
    static void write(S* ostr, const ::RoboCompOdometryMelex::TOdometry& v)
    {
        ostr->write(v.vel);
        ostr->write(v.steer);
    }
};

template<typename S>
struct StreamReader< ::RoboCompOdometryMelex::TOdometry, S>
{
    static void read(S* istr, ::RoboCompOdometryMelex::TOdometry& v)
    {
        istr->read(v.vel);
        istr->read(v.steer);
    }
};

}
/// \endcond

namespace RoboCompOdometryMelex
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 * Create a wrapper instance by calling ::RoboCompOdometryMelex::newCallback_OdometryMelex_getOdometryState.
 */
template<class T>
class CallbackNC_OdometryMelex_getOdometryState : public Callback_OdometryMelex_getOdometryState_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const TOdometry&);

    CallbackNC_OdometryMelex_getOdometryState(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        OdometryMelexPrx proxy = OdometryMelexPrx::uncheckedCast(result->getProxy());
        TOdometry ret;
        try
        {
            ret = proxy->end_getOdometryState(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(ret);
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 */
template<class T> Callback_OdometryMelex_getOdometryStatePtr
newCallback_OdometryMelex_getOdometryState(const IceUtil::Handle<T>& instance, void (T::*cb)(const TOdometry&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_OdometryMelex_getOdometryState<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 */
template<class T> Callback_OdometryMelex_getOdometryStatePtr
newCallback_OdometryMelex_getOdometryState(T* instance, void (T::*cb)(const TOdometry&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_OdometryMelex_getOdometryState<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 * Create a wrapper instance by calling ::RoboCompOdometryMelex::newCallback_OdometryMelex_getOdometryState.
 */
template<class T, typename CT>
class Callback_OdometryMelex_getOdometryState : public Callback_OdometryMelex_getOdometryState_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const TOdometry&, const CT&);

    Callback_OdometryMelex_getOdometryState(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        OdometryMelexPrx proxy = OdometryMelexPrx::uncheckedCast(result->getProxy());
        TOdometry ret;
        try
        {
            ret = proxy->end_getOdometryState(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(ret, CT::dynamicCast(result->getCookie()));
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 */
template<class T, typename CT> Callback_OdometryMelex_getOdometryStatePtr
newCallback_OdometryMelex_getOdometryState(const IceUtil::Handle<T>& instance, void (T::*cb)(const TOdometry&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_OdometryMelex_getOdometryState<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompOdometryMelex::OdometryMelex::begin_getOdometryState.
 */
template<class T, typename CT> Callback_OdometryMelex_getOdometryStatePtr
newCallback_OdometryMelex_getOdometryState(T* instance, void (T::*cb)(const TOdometry&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_OdometryMelex_getOdometryState<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif