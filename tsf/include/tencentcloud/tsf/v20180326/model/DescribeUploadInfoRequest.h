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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUPLOADINFOREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUPLOADINFOREQUEST_H_

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
                * DescribeUploadInfo请求参数结构体
                */
                class DescribeUploadInfoRequest : public AbstractModel
                {
                public:
                    DescribeUploadInfoRequest();
                    ~DescribeUploadInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param ApplicationId 应用ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取程序包名
                     * @return PkgName 程序包名
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置程序包名
                     * @param PkgName 程序包名
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取程序包版本
                     * @return PkgVersion 程序包版本
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置程序包版本
                     * @param PkgVersion 程序包版本
                     */
                    void SetPkgVersion(const std::string& _pkgVersion);

                    /**
                     * 判断参数 PkgVersion 是否已赋值
                     * @return PkgVersion 是否已赋值
                     */
                    bool PkgVersionHasBeenSet() const;

                    /**
                     * 获取程序包类型
                     * @return PkgType 程序包类型
                     */
                    std::string GetPkgType() const;

                    /**
                     * 设置程序包类型
                     * @param PkgType 程序包类型
                     */
                    void SetPkgType(const std::string& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取程序包介绍
                     * @return PkgDesc 程序包介绍
                     */
                    std::string GetPkgDesc() const;

                    /**
                     * 设置程序包介绍
                     * @param PkgDesc 程序包介绍
                     */
                    void SetPkgDesc(const std::string& _pkgDesc);

                    /**
                     * 判断参数 PkgDesc 是否已赋值
                     * @return PkgDesc 是否已赋值
                     */
                    bool PkgDescHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 程序包名
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * 程序包版本
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                    /**
                     * 程序包类型
                     */
                    std::string m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * 程序包介绍
                     */
                    std::string m_pkgDesc;
                    bool m_pkgDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUPLOADINFOREQUEST_H_
