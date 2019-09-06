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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMDESC_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ParamConstraint.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DB参数描述
                */
                class ParamDesc : public AbstractModel
                {
                public:
                    ParamDesc();
                    ~ParamDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名字
                     * @return Param 参数名字
                     */
                    std::string GetParam() const;

                    /**
                     * 设置参数名字
                     * @param Param 参数名字
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取当前参数值
                     * @return Value 当前参数值
                     */
                    std::string GetValue() const;

                    /**
                     * 设置当前参数值
                     * @param Value 当前参数值
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取设置过的值，参数生效后，该值和value一样。未设置过就不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetValue 设置过的值，参数生效后，该值和value一样。未设置过就不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSetValue() const;

                    /**
                     * 设置设置过的值，参数生效后，该值和value一样。未设置过就不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SetValue 设置过的值，参数生效后，该值和value一样。未设置过就不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSetValue(const std::string& _setValue);

                    /**
                     * 判断参数 SetValue 是否已赋值
                     * @return SetValue 是否已赋值
                     */
                    bool SetValueHasBeenSet() const;

                    /**
                     * 获取系统默认值
                     * @return Default 系统默认值
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置系统默认值
                     * @param Default 系统默认值
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取参数限制
                     * @return Constraint 参数限制
                     */
                    ParamConstraint GetConstraint() const;

                    /**
                     * 设置参数限制
                     * @param Constraint 参数限制
                     */
                    void SetConstraint(const ParamConstraint& _constraint);

                    /**
                     * 判断参数 Constraint 是否已赋值
                     * @return Constraint 是否已赋值
                     */
                    bool ConstraintHasBeenSet() const;

                private:

                    /**
                     * 参数名字
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 当前参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 设置过的值，参数生效后，该值和value一样。未设置过就不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setValue;
                    bool m_setValueHasBeenSet;

                    /**
                     * 系统默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 参数限制
                     */
                    ParamConstraint m_constraint;
                    bool m_constraintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMDESC_H_