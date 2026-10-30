
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446150(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_64 [32];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  int local_10;
  longlong local_c;
  
  iVar4 = 0;
  local_14 = 0;
  local_10 = 0;
  local_24 = 0;
  local_20 = 0x320000;
  local_1c = 0xfe4a8000;
  FUN_00445720();
  iVar3 = FUN_0046e850(param_1,local_34,local_44,local_64);
  if (iVar3 != 0) {
    iVar3 = FUN_0046f0c0(param_1);
    if (iVar3 == 0) {
      *param_4 = 0x20000;
    }
    else {
      *param_4 = *(undefined4 *)(iVar3 + 100);
    }
    if (param_2[0x10] != 0) {
      FUN_004b1840(param_2[0x10]);
      param_2[0x10] = 0;
      iVar4 = param_2[0xd];
      local_14 = param_2[0xe];
      local_10 = param_2[0xf];
    }
    piVar5 = param_2;
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    iVar3 = FUN_004b14b0(local_34,s_mp_curship_00545c60,local_44);
    param_2[0x10] = iVar3;
    FUN_004b2950(param_2,0);
    lVar1 = (longlong)((param_3[2] - *param_3 >> 1) + 1) * (longlong)DAT_005a67e4;
    fVar2 = (float)DAT_00604470 * _DAT_0052e998;
    param_2[7] = 0;
    param_2[8] = 0;
    local_c = (longlong)
              ROUND((fVar2 / (float)(int)((uint)lVar1 >> 0x10 |
                                         (int)((ulonglong)lVar1 >> 0x20) << 0x10)) * _DAT_0052e544 *
                    (float)_DAT_0052e990);
    param_2[9] = (int)local_c;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = (int)local_c;
    param_2[1] = 0;
    param_2[5] = 0;
    *param_2 = *param_2 + 0x90;
    param_2[0xd] = iVar4;
    param_2[0xe] = local_14;
    param_2[0xf] = local_10;
    FUN_004b3a10(&local_24);
  }
  return;
}

