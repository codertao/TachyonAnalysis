
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Mine_InitDesc(int param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x1a0) = 7;
  *(undefined4 *)(param_1 + 0x1a4) = 7;
  uVar1 = Race_GetFlags(*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  local_8 = (int)(longlong)
                 ROUND((float)*(int *)(param_1 + 0x1b0) * _DAT_0052e540 * (float)_DAT_0052e538);
  uVar1 = MathAsm_TrigTable(local_8 >> 1);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) << 0xd;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) << 0xd;
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  return;
}

