#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(redis_public_header
  include/tencentcloud/redis/v20180412/RedisClient.h
  )

set(redis_public_header_model
  include/tencentcloud/redis/v20180412/model/ModifyInstanceParamsResponse.h
  include/tencentcloud/redis/v20180412/model/RedisBackupSet.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdResponse.h
  include/tencentcloud/redis/v20180412/model/ModifyAutoBackupConfigResponse.h
  include/tencentcloud/redis/v20180412/model/RestoreInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/TaskInfoDetail.h
  include/tencentcloud/redis/v20180412/model/SwitchInstanceVipRequest.h
  include/tencentcloud/redis/v20180412/model/CreateInstancesRequest.h
  include/tencentcloud/redis/v20180412/model/ModifyNetworkConfigResponse.h
  include/tencentcloud/redis/v20180412/model/CommandTake.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyResponse.h
  include/tencentcloud/redis/v20180412/model/Inbound.h
  include/tencentcloud/redis/v20180412/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeTaskListResponse.h
  include/tencentcloud/redis/v20180412/model/ModifyInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/RenewInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeSlowLogResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeBackupUrlRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstancesResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceEnumParam.h
  include/tencentcloud/redis/v20180412/model/Account.h
  include/tencentcloud/redis/v20180412/model/SecurityGroupsInboundAndOutbound.h
  include/tencentcloud/redis/v20180412/model/ResetPasswordResponse.h
  include/tencentcloud/redis/v20180412/model/ClearInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/RegionConf.h
  include/tencentcloud/redis/v20180412/model/BigKeyInfo.h
  include/tencentcloud/redis/v20180412/model/RenewInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceParamRecordsResponse.h
  include/tencentcloud/redis/v20180412/model/ModifyAutoBackupConfigRequest.h
  include/tencentcloud/redis/v20180412/model/InstanceMultiParam.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceDealDetailRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupRequest.h
  include/tencentcloud/redis/v20180412/model/RestoreInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceShardsResponse.h
  include/tencentcloud/redis/v20180412/model/DestroyPrepaidInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/ManualBackupInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceTagInfo.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceDTSInfoResponse.h
  include/tencentcloud/redis/v20180412/model/DestroyPostpaidInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/ModifyInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/TradeDealDetail.h
  include/tencentcloud/redis/v20180412/model/SourceInfo.h
  include/tencentcloud/redis/v20180412/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceDTSInfoRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeProductInfoResponse.h
  include/tencentcloud/redis/v20180412/model/ModifyInstanceAccountRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeBackupUrlResponse.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceRenewInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/ResetPasswordRequest.h
  include/tencentcloud/redis/v20180412/model/ModifyInstanceAccountResponse.h
  include/tencentcloud/redis/v20180412/model/DelayDistribution.h
  include/tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupsResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceBackupsResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceIntegerParam.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistRequest.h
  include/tencentcloud/redis/v20180412/model/InstanceTextParam.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceAccountRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceParamRecordsRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeTaskListRequest.h
  include/tencentcloud/redis/v20180412/model/DisableReplicaReadonlyResponse.h
  include/tencentcloud/redis/v20180412/model/CreateInstancesResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeTaskInfoRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdRequest.h
  include/tencentcloud/redis/v20180412/model/ModifyNetworkConfigRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceSecurityGroupRequest.h
  include/tencentcloud/redis/v20180412/model/InstanceParamHistory.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceParamsRequest.h
  include/tencentcloud/redis/v20180412/model/CleanUpInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/ModifyDBInstanceSecurityGroupsRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceShardsRequest.h
  include/tencentcloud/redis/v20180412/model/Outbound.h
  include/tencentcloud/redis/v20180412/model/DescribeAutoBackupConfigResponse.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupsRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistResponse.h
  include/tencentcloud/redis/v20180412/model/SecurityGroup.h
  include/tencentcloud/redis/v20180412/model/CreateInstanceAccountRequest.h
  include/tencentcloud/redis/v20180412/model/EnableReplicaReadonlyResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceSecurityGroupDetail.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceSecurityGroupResponse.h
  include/tencentcloud/redis/v20180412/model/ProductConf.h
  include/tencentcloud/redis/v20180412/model/InstanceNode.h
  include/tencentcloud/redis/v20180412/model/StartupInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceDTSInstanceInfo.h
  include/tencentcloud/redis/v20180412/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeTaskInfoResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistResponse.h
  include/tencentcloud/redis/v20180412/model/CleanUpInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceDealDetailResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstancesRequest.h
  include/tencentcloud/redis/v20180412/model/SourceCommand.h
  include/tencentcloud/redis/v20180412/model/ModfiyInstancePasswordRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeSlowLogRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeAutoBackupConfigRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPResponse.h
  include/tencentcloud/redis/v20180412/model/DestroyPostpaidInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DeleteInstanceAccountRequest.h
  include/tencentcloud/redis/v20180412/model/UpgradeInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/ManualBackupInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/ModfiyInstancePasswordResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceSet.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceRenewInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookRequest.h
  include/tencentcloud/redis/v20180412/model/DestroyPrepaidInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/ModifyInstanceParamsRequest.h
  include/tencentcloud/redis/v20180412/model/BigKeyTypeInfo.h
  include/tencentcloud/redis/v20180412/model/InstanceClusterNode.h
  include/tencentcloud/redis/v20180412/model/EnableReplicaReadonlyRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceAccountResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyRequest.h
  include/tencentcloud/redis/v20180412/model/DisableReplicaReadonlyRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeProductInfoRequest.h
  include/tencentcloud/redis/v20180412/model/SwitchInstanceVipResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceParamsResponse.h
  include/tencentcloud/redis/v20180412/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/redis/v20180412/model/StartupInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/HotKeyInfo.h
  include/tencentcloud/redis/v20180412/model/CreateInstanceAccountResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceBackupsRequest.h
  include/tencentcloud/redis/v20180412/model/SecurityGroupDetail.h
  include/tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/DeleteInstanceAccountResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPRequest.h
  include/tencentcloud/redis/v20180412/model/InstanceClusterShard.h
  include/tencentcloud/redis/v20180412/model/ZoneCapacityConf.h
  include/tencentcloud/redis/v20180412/model/UpgradeInstanceRequest.h
  include/tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupResponse.h
  include/tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceParam.h
  include/tencentcloud/redis/v20180412/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/redis/v20180412/model/ClearInstanceResponse.h
  include/tencentcloud/redis/v20180412/model/InstanceSlowlogDetail.h
  )

set(redis_src
  src/v20180412/RedisClient.cpp
  src/v20180412/model/ModifyInstanceParamsResponse.cpp
  src/v20180412/model/RedisBackupSet.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdResponse.cpp
  src/v20180412/model/ModifyAutoBackupConfigResponse.cpp
  src/v20180412/model/RestoreInstanceRequest.cpp
  src/v20180412/model/TaskInfoDetail.cpp
  src/v20180412/model/SwitchInstanceVipRequest.cpp
  src/v20180412/model/CreateInstancesRequest.cpp
  src/v20180412/model/ModifyNetworkConfigResponse.cpp
  src/v20180412/model/CommandTake.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyResponse.cpp
  src/v20180412/model/Inbound.cpp
  src/v20180412/model/AssociateSecurityGroupsRequest.cpp
  src/v20180412/model/DescribeTaskListResponse.cpp
  src/v20180412/model/ModifyInstanceRequest.cpp
  src/v20180412/model/RenewInstanceResponse.cpp
  src/v20180412/model/DescribeSlowLogResponse.cpp
  src/v20180412/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20180412/model/DescribeBackupUrlRequest.cpp
  src/v20180412/model/DescribeInstancesResponse.cpp
  src/v20180412/model/InstanceEnumParam.cpp
  src/v20180412/model/Account.cpp
  src/v20180412/model/SecurityGroupsInboundAndOutbound.cpp
  src/v20180412/model/ResetPasswordResponse.cpp
  src/v20180412/model/ClearInstanceRequest.cpp
  src/v20180412/model/RegionConf.cpp
  src/v20180412/model/BigKeyInfo.cpp
  src/v20180412/model/RenewInstanceRequest.cpp
  src/v20180412/model/DescribeInstanceParamRecordsResponse.cpp
  src/v20180412/model/ModifyAutoBackupConfigRequest.cpp
  src/v20180412/model/InstanceMultiParam.cpp
  src/v20180412/model/DescribeInstanceDealDetailRequest.cpp
  src/v20180412/model/DescribeProjectSecurityGroupRequest.cpp
  src/v20180412/model/RestoreInstanceResponse.cpp
  src/v20180412/model/DescribeInstanceShardsResponse.cpp
  src/v20180412/model/DestroyPrepaidInstanceRequest.cpp
  src/v20180412/model/ManualBackupInstanceResponse.cpp
  src/v20180412/model/InstanceTagInfo.cpp
  src/v20180412/model/DescribeInstanceDTSInfoResponse.cpp
  src/v20180412/model/DestroyPostpaidInstanceResponse.cpp
  src/v20180412/model/ModifyInstanceResponse.cpp
  src/v20180412/model/TradeDealDetail.cpp
  src/v20180412/model/SourceInfo.cpp
  src/v20180412/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorHotKeyRequest.cpp
  src/v20180412/model/DescribeInstanceDTSInfoRequest.cpp
  src/v20180412/model/DescribeProductInfoResponse.cpp
  src/v20180412/model/ModifyInstanceAccountRequest.cpp
  src/v20180412/model/DescribeBackupUrlResponse.cpp
  src/v20180412/model/InquiryPriceRenewInstanceResponse.cpp
  src/v20180412/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20180412/model/InquiryPriceCreateInstanceResponse.cpp
  src/v20180412/model/ResetPasswordRequest.cpp
  src/v20180412/model/ModifyInstanceAccountResponse.cpp
  src/v20180412/model/DelayDistribution.cpp
  src/v20180412/model/DescribeProjectSecurityGroupsResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorTookDistResponse.cpp
  src/v20180412/model/DescribeInstanceBackupsResponse.cpp
  src/v20180412/model/InstanceIntegerParam.cpp
  src/v20180412/model/DescribeInstanceMonitorTookDistRequest.cpp
  src/v20180412/model/InstanceTextParam.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdTookResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeySizeDistRequest.cpp
  src/v20180412/model/DescribeInstanceAccountRequest.cpp
  src/v20180412/model/DescribeInstanceParamRecordsRequest.cpp
  src/v20180412/model/DescribeTaskListRequest.cpp
  src/v20180412/model/DisableReplicaReadonlyResponse.cpp
  src/v20180412/model/CreateInstancesResponse.cpp
  src/v20180412/model/DescribeTaskInfoRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdRequest.cpp
  src/v20180412/model/ModifyNetworkConfigRequest.cpp
  src/v20180412/model/DescribeInstanceSecurityGroupRequest.cpp
  src/v20180412/model/InstanceParamHistory.cpp
  src/v20180412/model/DescribeInstanceParamsRequest.cpp
  src/v20180412/model/CleanUpInstanceResponse.cpp
  src/v20180412/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  src/v20180412/model/DescribeInstanceShardsRequest.cpp
  src/v20180412/model/Outbound.cpp
  src/v20180412/model/DescribeAutoBackupConfigResponse.cpp
  src/v20180412/model/InquiryPriceUpgradeInstanceRequest.cpp
  src/v20180412/model/DescribeProjectSecurityGroupsRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeySizeDistResponse.cpp
  src/v20180412/model/SecurityGroup.cpp
  src/v20180412/model/CreateInstanceAccountRequest.cpp
  src/v20180412/model/EnableReplicaReadonlyResponse.cpp
  src/v20180412/model/InstanceSecurityGroupDetail.cpp
  src/v20180412/model/DescribeInstanceSecurityGroupResponse.cpp
  src/v20180412/model/ProductConf.cpp
  src/v20180412/model/InstanceNode.cpp
  src/v20180412/model/StartupInstanceResponse.cpp
  src/v20180412/model/DescribeInstanceDTSInstanceInfo.cpp
  src/v20180412/model/AssociateSecurityGroupsResponse.cpp
  src/v20180412/model/DescribeTaskInfoResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistResponse.cpp
  src/v20180412/model/CleanUpInstanceRequest.cpp
  src/v20180412/model/DescribeInstanceDealDetailResponse.cpp
  src/v20180412/model/DescribeInstancesRequest.cpp
  src/v20180412/model/SourceCommand.cpp
  src/v20180412/model/ModfiyInstancePasswordRequest.cpp
  src/v20180412/model/DescribeSlowLogRequest.cpp
  src/v20180412/model/DescribeAutoBackupConfigRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorSIPResponse.cpp
  src/v20180412/model/DestroyPostpaidInstanceRequest.cpp
  src/v20180412/model/DeleteInstanceAccountRequest.cpp
  src/v20180412/model/UpgradeInstanceResponse.cpp
  src/v20180412/model/ManualBackupInstanceRequest.cpp
  src/v20180412/model/ModfiyInstancePasswordResponse.cpp
  src/v20180412/model/InstanceSet.cpp
  src/v20180412/model/InquiryPriceRenewInstanceRequest.cpp
  src/v20180412/model/DescribeInstanceMonitorTopNCmdTookRequest.cpp
  src/v20180412/model/DestroyPrepaidInstanceResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.cpp
  src/v20180412/model/InquiryPriceCreateInstanceRequest.cpp
  src/v20180412/model/ModifyInstanceParamsRequest.cpp
  src/v20180412/model/BigKeyTypeInfo.cpp
  src/v20180412/model/InstanceClusterNode.cpp
  src/v20180412/model/EnableReplicaReadonlyRequest.cpp
  src/v20180412/model/DescribeInstanceAccountResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorBigKeyRequest.cpp
  src/v20180412/model/DisableReplicaReadonlyRequest.cpp
  src/v20180412/model/DescribeProductInfoRequest.cpp
  src/v20180412/model/SwitchInstanceVipResponse.cpp
  src/v20180412/model/DescribeInstanceParamsResponse.cpp
  src/v20180412/model/DisassociateSecurityGroupsRequest.cpp
  src/v20180412/model/StartupInstanceRequest.cpp
  src/v20180412/model/HotKeyInfo.cpp
  src/v20180412/model/CreateInstanceAccountResponse.cpp
  src/v20180412/model/DescribeInstanceBackupsRequest.cpp
  src/v20180412/model/SecurityGroupDetail.cpp
  src/v20180412/model/InquiryPriceUpgradeInstanceResponse.cpp
  src/v20180412/model/DeleteInstanceAccountResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorSIPRequest.cpp
  src/v20180412/model/InstanceClusterShard.cpp
  src/v20180412/model/ZoneCapacityConf.cpp
  src/v20180412/model/UpgradeInstanceRequest.cpp
  src/v20180412/model/DescribeProjectSecurityGroupResponse.cpp
  src/v20180412/model/DescribeInstanceMonitorHotKeyResponse.cpp
  src/v20180412/model/InstanceParam.cpp
  src/v20180412/model/DisassociateSecurityGroupsResponse.cpp
  src/v20180412/model/ClearInstanceResponse.cpp
  src/v20180412/model/InstanceSlowlogDetail.cpp
  )

set(redis_include
    include/tencentcloud/redis
  )

add_library(redis ${LIB_TYPE}
  ${redis_public_header}
  ${redis_public_header_model}
  ${redis_src})

set_target_properties(redis
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}redis
  )

target_include_directories(redis
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(redis
  core)

#install(FILES ${redis_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/redis/v20180412)
#install(FILES ${redis_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/redis/v20180412/model)
install(DIRECTORY ${redis_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS redis
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
