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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 截图模板信息
                */
                class SnapshotTemplateInfo : public AbstractModel
                {
                public:
                    SnapshotTemplateInfo();
                    ~SnapshotTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板Id。
                     * @return TemplateId 模板Id。
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板Id。
                     * @param TemplateId 模板Id。
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param TemplateName 模板名称。
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取截图时间间隔。5-300秒。
                     * @return SnapshotInterval 截图时间间隔。5-300秒。
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置截图时间间隔。5-300秒。
                     * @param SnapshotInterval 截图时间间隔。5-300秒。
                     */
                    void SetSnapshotInterval(const int64_t& _snapshotInterval);

                    /**
                     * 判断参数 SnapshotInterval 是否已赋值
                     * @return SnapshotInterval 是否已赋值
                     */
                    bool SnapshotIntervalHasBeenSet() const;

                    /**
                     * 获取截图宽度。0-3000 0原始宽度并适配原始比例
                     * @return Width 截图宽度。0-3000 0原始宽度并适配原始比例
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置截图宽度。0-3000 0原始宽度并适配原始比例
                     * @param Width 截图宽度。0-3000 0原始宽度并适配原始比例
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取截图高度。0-2000 0原始高度并适配原始比例
                     * @return Height 截图高度。0-2000 0原始高度并适配原始比例
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置截图高度。0-2000 0原始高度并适配原始比例
                     * @param Height 截图高度。0-2000 0原始高度并适配原始比例
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取是否开启鉴黄，0：不开启，1：开启。
                     * @return PornFlag 是否开启鉴黄，0：不开启，1：开启。
                     */
                    int64_t GetPornFlag() const;

                    /**
                     * 设置是否开启鉴黄，0：不开启，1：开启。
                     * @param PornFlag 是否开启鉴黄，0：不开启，1：开启。
                     */
                    void SetPornFlag(const int64_t& _pornFlag);

                    /**
                     * 判断参数 PornFlag 是否已赋值
                     * @return PornFlag 是否已赋值
                     */
                    bool PornFlagHasBeenSet() const;

                    /**
                     * 获取Cos AppId。
                     * @return CosAppId Cos AppId。
                     */
                    int64_t GetCosAppId() const;

                    /**
                     * 设置Cos AppId。
                     * @param CosAppId Cos AppId。
                     */
                    void SetCosAppId(const int64_t& _cosAppId);

                    /**
                     * 判断参数 CosAppId 是否已赋值
                     * @return CosAppId 是否已赋值
                     */
                    bool CosAppIdHasBeenSet() const;

                    /**
                     * 获取Cos Bucket名称。
                     * @return CosBucket Cos Bucket名称。
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置Cos Bucket名称。
                     * @param CosBucket Cos Bucket名称。
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取Cos 地域。
                     * @return CosRegion Cos 地域。
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置Cos 地域。
                     * @param CosRegion Cos 地域。
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取模板描述
                     * @return Description 模板描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述
                     * @param Description 模板描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 模板Id。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 截图时间间隔。5-300秒。
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * 截图宽度。0-3000 0原始宽度并适配原始比例
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 截图高度。0-2000 0原始高度并适配原始比例
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 是否开启鉴黄，0：不开启，1：开启。
                     */
                    int64_t m_pornFlag;
                    bool m_pornFlagHasBeenSet;

                    /**
                     * Cos AppId。
                     */
                    int64_t m_cosAppId;
                    bool m_cosAppIdHasBeenSet;

                    /**
                     * Cos Bucket名称。
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * Cos 地域。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 模板描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_