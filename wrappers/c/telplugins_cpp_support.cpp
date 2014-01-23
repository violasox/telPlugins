#pragma hdrstop
#include "rr/rrRoadRunner.h"
#include "telTelluriumData.h"
#include "rr/rrException.h"
#include "telStringUtils.h"
#include "telplugins_c_api.h"
#include "telplugins_utilities.h"
#include "telplugins_cpp_support.h"

extern char* gLastError; 

namespace tlpc
{
using tlp::TelluriumData;
using rr::RoadRunner;
void setError(const string& err)
{
    if(gLastError)
    {
        delete [] gLastError;
    }

    gLastError = tlp::createText(err);
}


PluginManager* castToPluginManager(RRPluginManagerHandle handle)
{
    PluginManager *pm = static_cast<PluginManager*>(handle);
    if(pm)
    {
        return pm;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid PluginManager handle");
        throw(ex);
    }
}

Plugin* castToPlugin(RRPluginHandle handle)
{
    Plugin* plugin = (Plugin*) handle;
    if(plugin) //Will only fail if handle is NULL...
    {
        return plugin;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid Plugin handle");
        throw(ex);
    }
}

Properties* castToProperties(RRPropertiesHandle handle)
{
    Properties* para = (Properties*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid Properties handle");
        throw(ex);
    }
}

PropertyBase* castToProperty(RRPropertyHandle handle)
{
    PropertyBase* para = (PropertyBase*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid Property handle");
        throw(ex);
    }
}

Property<bool>* castToBoolProperty(RRPropertyHandle handle)
{
    Property<bool>* para = (Property<bool>*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid Boolean Property handle");
        throw(ex);
    }
}

Property<int>* castToIntProperty(RRPropertyHandle handle)
{
    Property<int>* para = (Property<int>*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid Integer Property handle");
        throw(ex);
    }
}

Property<double>* castToDoubleProperty(RRPropertyHandle handle)
{
    Property<double>* para = (Property<double>*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid Double Property handle");
        throw(ex);
    }
}

Property<string>* castToStringProperty(RRPropertyHandle handle)
{
    Property<string>* para = (Property<string>*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid string Property handle");
        throw(ex);
    }
}

Property<Properties>* castToPropertiesProperty(RRPropertyHandle handle)
{
    Property<Properties>* para = (Property<Properties>*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid string Property handle");
        throw(ex);
    }
}

RoadRunner* castToRoadRunner(RRHandle handle)
{
    rr::RoadRunner* para = (RoadRunner*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid RoadRunner data handle");
        throw(ex);
    }
}

TelluriumData* castToTelluriumData(RRDataHandle handle)
{
    tlp::TelluriumData* para = (TelluriumData*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid RoadRunner Data handle");
        throw(ex);
    }
}

Property<TelluriumData>* castToTelluriumDataProperty(RRPropertyHandle handle)
{
    Property<TelluriumData>* para = (Property<TelluriumData>*) handle;
    if(para) //Will only fail if handle is NULL...
    {
        return para;
    }
    else
    {
        rr::Exception ex("Failed to cast to a valid TelluriumData Property handle");
        throw(ex);
    }
}

//RRCDataPtr createRRCData(const TelluriumData& result)
//{
//    return rrc::createRRCData(result);
//}


}