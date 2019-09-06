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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeSimpleApplications请求参数结构体
                */
                class DescribeSimpleApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeSimpleApplicationsRequest();
                    ~DescribeSimpleApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID列表
                     * @return ApplicationIdList 应用ID列表
                     */
                    std::vector<std::string> GetApplicationIdList() const;

                    /**
                     * 设置应用ID列表
                     * @param ApplicationIdList 应用ID列表
                     */
                    void SetApplicationIdList(const std::vector<std::string>& _applicationIdList);

                    /**
                     * 判断参数 ApplicationIdList 是否已赋值
                     * @return ApplicationIdList 是否已赋值
                     */
                    bool ApplicationIdListHasBeenSet() const;

                    /**
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param ApplicationType 应用类型
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return Limit 每页条数
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param Limit 每页条数
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param Offset 起始偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取微服务类型
                     * @return MicroserviceType 微服务类型
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
                     * @param MicroserviceType 微服务类型
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取资源类型数组
                     * @return ApplicationResourceTypeList 资源类型数组
                     */
                    std::vector<std::string> GetApplicationResourceTypeList() const;

                    /**
                     * 设置资源类型数组
                     * @param ApplicationResourceTypeList 资源类型数组
                     */
                    void SetApplicationResourceTypeList(const std::vector<std::string>& _applicationResourceTypeList);

                    /**
                     * 判断参数 ApplicationResourceTypeList 是否已赋值
                     * @return ApplicationResourceTypeList 是否已赋值
                     */
                    bool ApplicationResourceTypeListHasBeenSet() const;

                private:

                    /**
                     * 应用ID列表
                     */
                    std::vector<std::string> m_applicationIdList;
                    bool m_applicationIdListHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 资源类型数组
                     */
                    std::vector<std::string> m_applicationResourceTypeList;
                    bool m_applicationResourceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEAPPLICATIONSREQUEST_H_