
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void ShipBuy_CalcModelScale(int param_1,int *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  ulonglong local_c;
  
  if (((param_2 != (int *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 0x40) != 0)) {
    local_c = (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x30);
    fVar2 = (float)local_c * _DAT_0052e5d8;
    fVar3 = (float)DAT_00604470;
    lVar1 = (longlong)((param_2[2] - *param_2 >> 1) + 1) * (longlong)DAT_005a67e4;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    fVar2 = ((fVar3 * fVar2) /
            (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)) *
            _DAT_0052e544;
    local_c._0_4_ = (undefined4)(longlong)ROUND(fVar2 * _DAT_0052e594 + fVar2);
    *(undefined4 *)(param_1 + 0x24) = (undefined4)local_c;
  }
  return;
}

