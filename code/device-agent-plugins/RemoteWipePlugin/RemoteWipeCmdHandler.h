// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "device-agent/common/MdmHandlerBase.h"

namespace Microsoft { namespace Azure { namespace DeviceManagement { namespace RemoteWipePlugin {

    class RemoteWipeCmdHandler : public DMCommon::MdmHandlerBase
    {
    public:
        RemoteWipeCmdHandler();

        // IRawHandler
        void Start(
            const Json::Value& config,
            bool& active);

        void OnConnectionStatusChanged(
            DMCommon::ConnectionStatus status);

        DMCommon::InvokeResult Invoke(
            const Json::Value& desiredConfig) noexcept;

    private:
        bool _testModeEnabled;
    };

}}}}
