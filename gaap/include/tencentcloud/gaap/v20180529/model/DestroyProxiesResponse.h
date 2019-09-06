/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESTROYPROXIESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESTROYPROXIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DestroyProxies返回参数结构体
                */
                class DestroyProxiesResponse : public AbstractModel
                {
                public:
                    DestroyProxiesResponse();
                    ~DestroyProxiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取处于不可销毁状态下的通道实例ID列表。
                     * @return InvalidStatusInstanceSet 处于不可销毁状态下的通道实例ID列表。
                     */
                    std::vector<std::string> GetInvalidStatusInstanceSet() const;

                    /**
                     * 判断参数 InvalidStatusInstanceSet 是否已赋值
                     * @return InvalidStatusInstanceSet 是否已赋值
                     */
                    bool InvalidStatusInstanceSetHasBeenSet() const;

                    /**
                     * 获取销毁操作失败的通道实例ID列表。
                     * @return OperationFailedInstanceSet 销毁操作失败的通道实例ID列表。
                     */
                    std::vector<std::string> GetOperationFailedInstanceSet() const;

                    /**
                     * 判断参数 OperationFailedInstanceSet 是否已赋值
                     * @return OperationFailedInstanceSet 是否已赋值
                     */
                    bool OperationFailedInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 处于不可销毁状态下的通道实例ID列表。
                     */
                    std::vector<std::string> m_invalidStatusInstanceSet;
                    bool m_invalidStatusInstanceSetHasBeenSet;

                    /**
                     * 销毁操作失败的通道实例ID列表。
                     */
                    std::vector<std::string> m_operationFailedInstanceSet;
                    bool m_operationFailedInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESTROYPROXIESRESPONSE_H_