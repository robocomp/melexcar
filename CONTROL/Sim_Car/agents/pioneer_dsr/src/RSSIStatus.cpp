//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.5
//
// <auto-generated>
//
// Generated from file `RSSIStatus.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <RSSIStatus.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <Ice/LocalException.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

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

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit<::RoboCompRSSIStatus::HardwareFailedException> iceC_RoboCompRSSIStatus_HardwareFailedException_init("::RoboCompRSSIStatus::HardwareFailedException");

const ::std::string iceC_RoboCompRSSIStatus_RSSIStatus_ids[2] =
{
    "::Ice::Object",
    "::RoboCompRSSIStatus::RSSIStatus"
};
const ::std::string iceC_RoboCompRSSIStatus_RSSIStatus_ops[] =
{
    "getRSSIState",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};
const ::std::string iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name = "getRSSIState";

}

RoboCompRSSIStatus::HardwareFailedException::~HardwareFailedException()
{
}

const ::std::string&
RoboCompRSSIStatus::HardwareFailedException::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompRSSIStatus::HardwareFailedException";
    return typeId;
}

bool
RoboCompRSSIStatus::RSSIStatus::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompRSSIStatus_RSSIStatus_ids, iceC_RoboCompRSSIStatus_RSSIStatus_ids + 2, s);
}

::std::vector<::std::string>
RoboCompRSSIStatus::RSSIStatus::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_RoboCompRSSIStatus_RSSIStatus_ids[0], &iceC_RoboCompRSSIStatus_RSSIStatus_ids[2]);
}

::std::string
RoboCompRSSIStatus::RSSIStatus::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompRSSIStatus::RSSIStatus::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompRSSIStatus::RSSIStatus";
    return typeId;
}

/// \cond INTERNAL
bool
RoboCompRSSIStatus::RSSIStatus::_iceD_getRSSIState(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    inS.readEmptyParams();
    TRSSI ret = this->getRSSIState(current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompRSSIStatus::RSSIStatus::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompRSSIStatus_RSSIStatus_ops, iceC_RoboCompRSSIStatus_RSSIStatus_ops + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompRSSIStatus_RSSIStatus_ops)
    {
        case 0:
        {
            return _iceD_getRSSIState(in, current);
        }
        case 1:
        {
            return _iceD_ice_id(in, current);
        }
        case 2:
        {
            return _iceD_ice_ids(in, current);
        }
        case 3:
        {
            return _iceD_ice_isA(in, current);
        }
        case 4:
        {
            return _iceD_ice_ping(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond INTERNAL
void
RoboCompRSSIStatus::RSSIStatusPrx::_iceI_getRSSIState(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRSSIStatus::TRSSI>>& outAsync, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name);
    outAsync->invoke(iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        nullptr,
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const HardwareFailedException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}
/// \endcond

/// \cond INTERNAL
::std::shared_ptr<::Ice::ObjectPrx>
RoboCompRSSIStatus::RSSIStatusPrx::_newInstance() const
{
    return ::IceInternal::createProxy<RSSIStatusPrx>();
}
/// \endcond

const ::std::string&
RoboCompRSSIStatus::RSSIStatusPrx::ice_staticId()
{
    return RSSIStatus::ice_staticId();
}

namespace Ice
{
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name = "getRSSIState";

}

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::RoboCompRSSIStatus::HardwareFailedException> iceC_RoboCompRSSIStatus_HardwareFailedException_init("::RoboCompRSSIStatus::HardwareFailedException");

}

RoboCompRSSIStatus::HardwareFailedException::HardwareFailedException(const ::std::string& what) :
    ::Ice::UserException(),
    what(what)
{
}

RoboCompRSSIStatus::HardwareFailedException::~HardwareFailedException() throw()
{
}

::std::string
RoboCompRSSIStatus::HardwareFailedException::ice_id() const
{
    return "::RoboCompRSSIStatus::HardwareFailedException";
}

RoboCompRSSIStatus::HardwareFailedException*
RoboCompRSSIStatus::HardwareFailedException::ice_clone() const
{
    return new HardwareFailedException(*this);
}

void
RoboCompRSSIStatus::HardwareFailedException::ice_throw() const
{
    throw *this;
}

/// \cond STREAM
void
RoboCompRSSIStatus::HardwareFailedException::_writeImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice("::RoboCompRSSIStatus::HardwareFailedException", -1, true);
    ::Ice::StreamWriter< HardwareFailedException, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompRSSIStatus::HardwareFailedException::_readImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< HardwareFailedException, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::RoboCompRSSIStatus::upCast(RSSIStatus* p) { return p; }

void
::IceProxy::RoboCompRSSIStatus::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< RSSIStatus>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new RSSIStatus;
        v->_copyFrom(proxy);
    }
}
/// \endcond

::Ice::AsyncResultPtr
IceProxy::RoboCompRSSIStatus::RSSIStatus::_iceI_begin_getRSSIState(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name, ::Ice::Normal, context);
        result->writeEmptyParams();
        result->invoke(iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::RoboCompRSSIStatus::TRSSI
IceProxy::RoboCompRSSIStatus::RSSIStatus::end_getRSSIState(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRSSIStatus_RSSIStatus_getRSSIState_name);
    ::RoboCompRSSIStatus::TRSSI ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompRSSIStatus::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

/// \cond INTERNAL
::IceProxy::Ice::Object*
IceProxy::RoboCompRSSIStatus::RSSIStatus::_newInstance() const
{
    return new RSSIStatus;
}
/// \endcond

const ::std::string&
IceProxy::RoboCompRSSIStatus::RSSIStatus::ice_staticId()
{
    return ::RoboCompRSSIStatus::RSSIStatus::ice_staticId();
}

RoboCompRSSIStatus::RSSIStatus::~RSSIStatus()
{
}

/// \cond INTERNAL
::Ice::Object* RoboCompRSSIStatus::upCast(RSSIStatus* p) { return p; }

/// \endcond

namespace
{
const ::std::string iceC_RoboCompRSSIStatus_RSSIStatus_ids[2] =
{
    "::Ice::Object",
    "::RoboCompRSSIStatus::RSSIStatus"
};

}

bool
RoboCompRSSIStatus::RSSIStatus::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompRSSIStatus_RSSIStatus_ids, iceC_RoboCompRSSIStatus_RSSIStatus_ids + 2, s);
}

::std::vector< ::std::string>
RoboCompRSSIStatus::RSSIStatus::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_RoboCompRSSIStatus_RSSIStatus_ids[0], &iceC_RoboCompRSSIStatus_RSSIStatus_ids[2]);
}

const ::std::string&
RoboCompRSSIStatus::RSSIStatus::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompRSSIStatus::RSSIStatus::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::RoboCompRSSIStatus::RSSIStatus";
    return typeId;
#else
    return iceC_RoboCompRSSIStatus_RSSIStatus_ids[1];
#endif
}

/// \cond INTERNAL
bool
RoboCompRSSIStatus::RSSIStatus::_iceD_getRSSIState(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    inS.readEmptyParams();
    TRSSI ret = this->getRSSIState(current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

namespace
{
const ::std::string iceC_RoboCompRSSIStatus_RSSIStatus_all[] =
{
    "getRSSIState",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

/// \cond INTERNAL
bool
RoboCompRSSIStatus::RSSIStatus::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompRSSIStatus_RSSIStatus_all, iceC_RoboCompRSSIStatus_RSSIStatus_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompRSSIStatus_RSSIStatus_all)
    {
        case 0:
        {
            return _iceD_getRSSIState(in, current);
        }
        case 1:
        {
            return _iceD_ice_id(in, current);
        }
        case 2:
        {
            return _iceD_ice_ids(in, current);
        }
        case 3:
        {
            return _iceD_ice_isA(in, current);
        }
        case 4:
        {
            return _iceD_ice_ping(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond STREAM
void
RoboCompRSSIStatus::RSSIStatus::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    ::Ice::StreamWriter< RSSIStatus, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompRSSIStatus::RSSIStatus::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< RSSIStatus, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
void
RoboCompRSSIStatus::_icePatchObjectPtr(RSSIStatusPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = RSSIStatusPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(RSSIStatus::ice_staticId(), v);
    }
}
/// \endcond

namespace Ice
{
}

#endif