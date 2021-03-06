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

#ifndef TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONREQUEST_H_
#define TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hcm
    {
        namespace V20181106
        {
            namespace Model
            {
                /**
                * Evaluation请求参数结构体
                */
                class EvaluationRequest : public AbstractModel
                {
                public:
                    EvaluationRequest();
                    ~EvaluationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片唯一标识，一张图片一个SessionId；
                     * @return SessionId 图片唯一标识，一张图片一个SessionId；
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置图片唯一标识，一张图片一个SessionId；
                     * @param SessionId 图片唯一标识，一张图片一个SessionId；
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     * @return Image 图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     * @param Image 图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     * @return HcmAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     */
                    std::string GetHcmAppid() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     * @param HcmAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     */
                    void SetHcmAppid(const std::string& _hcmAppid);

                    /**
                     * 判断参数 HcmAppid 是否已赋值
                     * @return HcmAppid 是否已赋值
                     */
                    bool HcmAppidHasBeenSet() const;

                    /**
                     * 获取图片url，与Image参数二者填一即可；
                     * @return Url 图片url，与Image参数二者填一即可；
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片url，与Image参数二者填一即可；
                     * @param Url 图片url，与Image参数二者填一即可；
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     * @return SupportHorizontalImage 横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     */
                    bool GetSupportHorizontalImage() const;

                    /**
                     * 设置横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     * @param SupportHorizontalImage 横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     */
                    void SetSupportHorizontalImage(const bool& _supportHorizontalImage);

                    /**
                     * 判断参数 SupportHorizontalImage 是否已赋值
                     * @return SupportHorizontalImage 是否已赋值
                     */
                    bool SupportHorizontalImageHasBeenSet() const;

                    /**
                     * 获取拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     * @return RejectNonArithmeticImage 拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     */
                    bool GetRejectNonArithmeticImage() const;

                    /**
                     * 设置拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     * @param RejectNonArithmeticImage 拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     */
                    void SetRejectNonArithmeticImage(const bool& _rejectNonArithmeticImage);

                    /**
                     * 判断参数 RejectNonArithmeticImage 是否已赋值
                     * @return RejectNonArithmeticImage 是否已赋值
                     */
                    bool RejectNonArithmeticImageHasBeenSet() const;

                    /**
                     * 获取异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @return IsAsync 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     */
                    int64_t GetIsAsync() const;

                    /**
                     * 设置异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @param IsAsync 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     */
                    void SetIsAsync(const int64_t& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     */
                    bool IsAsyncHasBeenSet() const;

                private:

                    /**
                     * 图片唯一标识，一张图片一个SessionId；
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     */
                    std::string m_hcmAppid;
                    bool m_hcmAppidHasBeenSet;

                    /**
                     * 图片url，与Image参数二者填一即可；
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     */
                    bool m_supportHorizontalImage;
                    bool m_supportHorizontalImageHasBeenSet;

                    /**
                     * 拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     */
                    bool m_rejectNonArithmeticImage;
                    bool m_rejectNonArithmeticImageHasBeenSet;

                    /**
                     * 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     */
                    int64_t m_isAsync;
                    bool m_isAsyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONREQUEST_H_
