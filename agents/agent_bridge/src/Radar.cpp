//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `Radar.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Radar.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
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
#   if ICE_INT_VERSION % 100 < 3
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::std::string iceC_RoboCompRadar_Radar_ids[2] =
{
    "::Ice::Object",
    "::RoboCompRadar::Radar"
};
const ::std::string iceC_RoboCompRadar_Radar_ops[] =
{
    "getData",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};
const ::std::string iceC_RoboCompRadar_Radar_getData_name = "getData";

}

bool
RoboCompRadar::Radar::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompRadar_Radar_ids, iceC_RoboCompRadar_Radar_ids + 2, s);
}

::std::vector<::std::string>
RoboCompRadar::Radar::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_RoboCompRadar_Radar_ids[0], &iceC_RoboCompRadar_Radar_ids[2]);
}

::std::string
RoboCompRadar::Radar::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompRadar::Radar::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompRadar::Radar";
    return typeId;
}

/// \cond INTERNAL
bool
RoboCompRadar::Radar::_iceD_getData(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    inS.readEmptyParams();
    RadarData ret = this->getData(current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompRadar::Radar::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompRadar_Radar_ops, iceC_RoboCompRadar_Radar_ops + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompRadar_Radar_ops)
    {
        case 0:
        {
            return _iceD_getData(in, current);
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
RoboCompRadar::RadarPrx::_iceI_getData(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompRadar::RadarData>>& outAsync, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompRadar_Radar_getData_name);
    outAsync->invoke(iceC_RoboCompRadar_Radar_getData_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        nullptr,
        nullptr);
}
/// \endcond

/// \cond INTERNAL
::std::shared_ptr<::Ice::ObjectPrx>
RoboCompRadar::RadarPrx::_newInstance() const
{
    return ::IceInternal::createProxy<RadarPrx>();
}
/// \endcond

const ::std::string&
RoboCompRadar::RadarPrx::ice_staticId()
{
    return Radar::ice_staticId();
}

namespace Ice
{
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_RoboCompRadar_Radar_getData_name = "getData";

}

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::RoboCompRadar::upCast(Radar* p) { return p; }

void
::IceProxy::RoboCompRadar::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< Radar>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new Radar;
        v->_copyFrom(proxy);
    }
}
/// \endcond

::Ice::AsyncResultPtr
IceProxy::RoboCompRadar::Radar::_iceI_begin_getData(const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompRadar_Radar_getData_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompRadar_Radar_getData_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompRadar_Radar_getData_name, ::Ice::Normal, context);
        result->writeEmptyParams();
        result->invoke(iceC_RoboCompRadar_Radar_getData_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::RoboCompRadar::RadarData
IceProxy::RoboCompRadar::Radar::end_getData(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompRadar_Radar_getData_name);
    ::RoboCompRadar::RadarData ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
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
IceProxy::RoboCompRadar::Radar::_newInstance() const
{
    return new Radar;
}
/// \endcond

const ::std::string&
IceProxy::RoboCompRadar::Radar::ice_staticId()
{
    return ::RoboCompRadar::Radar::ice_staticId();
}

RoboCompRadar::Radar::~Radar()
{
}

/// \cond INTERNAL
::Ice::Object* RoboCompRadar::upCast(Radar* p) { return p; }

/// \endcond

namespace
{
const ::std::string iceC_RoboCompRadar_Radar_ids[2] =
{
    "::Ice::Object",
    "::RoboCompRadar::Radar"
};

}

bool
RoboCompRadar::Radar::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompRadar_Radar_ids, iceC_RoboCompRadar_Radar_ids + 2, s);
}

::std::vector< ::std::string>
RoboCompRadar::Radar::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_RoboCompRadar_Radar_ids[0], &iceC_RoboCompRadar_Radar_ids[2]);
}

const ::std::string&
RoboCompRadar::Radar::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompRadar::Radar::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::RoboCompRadar::Radar";
    return typeId;
#else
    return iceC_RoboCompRadar_Radar_ids[1];
#endif
}

/// \cond INTERNAL
bool
RoboCompRadar::Radar::_iceD_getData(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    inS.readEmptyParams();
    RadarData ret = this->getData(current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

namespace
{
const ::std::string iceC_RoboCompRadar_Radar_all[] =
{
    "getData",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

/// \cond INTERNAL
bool
RoboCompRadar::Radar::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompRadar_Radar_all, iceC_RoboCompRadar_Radar_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompRadar_Radar_all)
    {
        case 0:
        {
            return _iceD_getData(in, current);
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
RoboCompRadar::Radar::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    ::Ice::StreamWriter< Radar, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompRadar::Radar::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< Radar, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
void
RoboCompRadar::_icePatchObjectPtr(RadarPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = RadarPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(Radar::ice_staticId(), v);
    }
}
/// \endcond

namespace Ice
{
}

#endif
