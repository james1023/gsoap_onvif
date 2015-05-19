# gsoap_onvif
build onvif engine by using gsoap_2.8.11 lib.
please use msvc2010 to open gsoap_2.8.11/gsoap/james/gSOAP.vcxproj

step 1.
cd gsoap-2.8/gsoap/james
..\bin\win32\wsdl2h -cdkPs  -t ..\typemap.dat -o onvif_wsdl.h http://www.onvif.org/onvif/ver10/device/wsdl/devicemgmt.wsdl http://www.onvif.org/onvif/ver10/media/wsdl/media.wsdl http://www.onvif.org/onvif/ver10/event/wsdl/event.wsdl http://www.onvif.org/onvif/ver10/network/wsdl/remotediscovery.wsdl http://www.onvif.org/onvif/ver20/imaging/wsdl/imaging.wsdl http://www.onvif.org/onvif/ver20/ptz/wsdl/ptz.wsdl http://www.onvif.org/onvif/ver20/analytics/wsdl/analytics.wsdl

step 2.
..\bin\win32\soapcpp2.exe -2cLx -I..\import -I..\ onvif_wsdl.h

step 3.
manually add callback function.
ex. __tds__GetDeviceInformation
