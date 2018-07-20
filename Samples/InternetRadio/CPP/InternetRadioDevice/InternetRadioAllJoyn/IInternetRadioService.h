//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace maker { namespace InternetRadio {

public interface class IInternetRadioService
{
public:
    // Implement this function to handle calls to the AddPreset method.
    Windows::Foundation::IAsyncOperation<InternetRadioAddPresetResult^>^ AddPresetAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberPresetAddress);

    // Implement this function to handle calls to the NextPreset method.
    Windows::Foundation::IAsyncOperation<InternetRadioNextPresetResult^>^ NextPresetAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the PlayPreset method.
    Windows::Foundation::IAsyncOperation<InternetRadioPlayPresetResult^>^ PlayPresetAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetName);

    // Implement this function to handle calls to the PreviousPreset method.
    Windows::Foundation::IAsyncOperation<InternetRadioPreviousPresetResult^>^ PreviousPresetAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the RemovePreset method.
    Windows::Foundation::IAsyncOperation<InternetRadioRemovePresetResult^>^ RemovePresetAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetName);

    // Implement this function to handle requests for the value of the CurrentlyPlaying property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioGetCurrentlyPlayingResult^>^ GetCurrentlyPlayingAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the Power property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioGetPowerResult^>^ GetPowerAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Power property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioSetPowerResult^>^ SetPowerAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, bool value);

    // Implement this function to handle requests for the value of the Presets property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioGetPresetsResult^>^ GetPresetsAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the Version property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioGetVersionResult^>^ GetVersionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the Volume property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioGetVolumeResult^>^ GetVolumeAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Volume property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<InternetRadioSetVolumeResult^>^ SetVolumeAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, double value);

};

} } } } 