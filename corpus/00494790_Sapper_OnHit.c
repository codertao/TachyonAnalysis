
/* def+0x98 for sappers: stick to target (offset +0xfc, rel orient +0x108, target +0xf4); client
   copy -> Sapper_ReportAttach, server -> Sapper_BroadcastAttach */

void Sapper_OnHit(int param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 local_28 [24];
  vec3 local_10;
  
  local_10.x = *param_3 - *(int *)(param_2 + 0x34);
  *(int *)(param_1 + 0xfc) = local_10.x;
  local_10.y = param_3[1] - *(int *)(param_2 + 0x38);
  iVar1 = param_1 + 0xfc;
  *(int *)(param_1 + 0x100) = local_10.y;
  local_10.z = param_3[2] - *(int *)(param_2 + 0x3c);
  *(int *)(param_1 + 0x104) = local_10.z;
  call_Vec_NormalizeFast(&local_10);
  lVar2 = (longlong)*(int *)(*(int *)(param_1 + 0x58) + 0x30) * 56000;
  uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  local_10.x = (uint)((longlong)local_10.x * (longlong)(int)uVar3) >> 0x10 |
               (int)((ulonglong)((longlong)local_10.x * (longlong)(int)uVar3) >> 0x20) << 0x10;
  local_10.y = (uint)((longlong)local_10.y * (longlong)(int)uVar3) >> 0x10 |
               (int)((ulonglong)((longlong)local_10.y * (longlong)(int)uVar3) >> 0x20) << 0x10;
  local_10.z = (uint)((longlong)local_10.z * (longlong)(int)uVar3) >> 0x10 |
               (int)((ulonglong)((longlong)local_10.z * (longlong)(int)uVar3) >> 0x20) << 0x10;
  *(int *)(param_1 + 0x108) =
       *(int *)(param_1 + 0x4c) * 0x80 + *(int *)(param_2 + 0x4c) * -0x80 >> 7;
  *(int *)(param_1 + 0x10c) =
       *(int *)(param_1 + 0x50) * 0x80 + *(int *)(param_2 + 0x50) * -0x80 >> 7;
  *(int *)(param_1 + 0x110) =
       *(int *)(param_1 + 0x54) * 0x80 + *(int *)(param_2 + 0x54) * -0x80 >> 7;
  FUN_004b1be0(local_28,param_2 + 0x4c);
  FUN_004b2410(iVar1,iVar1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(code **)(param_1 + 0x70) = FUN_00492d30;
  *(int *)(param_1 + 0xf4) = param_2;
  if (*(int *)(param_1 + 0xd8) == 1) {
    *(undefined1 **)(param_1 + 0x68) = &Sapper_ThinkPredicted;
    Sapper_ReportAttach(**(undefined4 **)(param_1 + 0xdc),iVar1,param_1 + 0x108,param_2,
                        *(undefined4 *)(param_1 + 0x78));
    FUN_004666e0(0xc,0xf,0,param_1,0x10000);
    return;
  }
  *(code **)(param_1 + 0x68) = Sapper_ThinkServer;
  Sapper_BroadcastAttach
            (**(undefined4 **)(param_1 + 0xdc),iVar1,param_1 + 0x108,param_2,
             *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
  return;
}

