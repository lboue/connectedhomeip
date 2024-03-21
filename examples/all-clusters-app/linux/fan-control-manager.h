/**
 *
 *    Copyright (c) 2024 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#include <app/clusters/fan-control-server/fan-control-server.h>

namespace chip {
namespace app {
namespace Clusters {
namespace FanControl {

class FanControlManager : public Delegate
{
public:
    CHIP_ERROR Read(const ConcreteReadAttributePath & aPath, AttributeValueEncoder & aEncoder) override;

private:
    CHIP_ERROR ReadPercentCurrent(AttributeValueEncoder & aEncoder);
    CHIP_ERROR ReadSpeedCurrent(AttributeValueEncoder & aEncoder);
};

} // namespace WindowCovering
} // namespace Clusters
} // namespace app
} // namespace chip
