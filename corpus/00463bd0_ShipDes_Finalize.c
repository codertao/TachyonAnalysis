
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* derived fields; AI search block +0x56c..: main/secondary class, ranges <<13, scan angle ->
   cos(half) */

void ShipDes_Finalize(int param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = (int)(longlong)ROUND((float)*(int *)(param_1 + 0x110) * _DAT_0052e76c);
  fVar2 = (float)*(int *)(param_1 + 0xd8) * _DAT_0052e76c;
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xd8) / 100;
  *(int *)(param_1 + 0x114) = local_8;
  local_8 = (int)(longlong)ROUND(fVar2);
  *(int *)(param_1 + 0xdc) = local_8;
  local_8 = (int)(longlong)ROUND((float)*(int *)(param_1 + 0xd0) * _DAT_0052e76c);
  *(int *)(param_1 + 0xd4) = local_8;
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x54c);
  uVar3 = Race_GetFlags(*(undefined4 *)(param_1 + 0x544));
  *(undefined4 *)(param_1 + 0x56c) = uVar3;
  local_8 = (int)(longlong)
                 ROUND((float)*(int *)(param_1 + 0x580) * _DAT_0052e540 * (float)_DAT_0052e538);
  uVar3 = MathAsm_TrigTable(local_8 >> 1);
  bVar1 = *(float *)(param_1 + 0x53c) == _DAT_0052e598;
  *(undefined4 *)(param_1 + 0x580) = uVar3;
  *(int *)(param_1 + 0x57c) = *(int *)(param_1 + 0x57c) << 0xd;
  *(int *)(param_1 + 0x578) = *(int *)(param_1 + 0x578) << 0xd;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x53c) = 0x3f800000;
  }
  if (*(int *)(param_1 + 0x6c0) == 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 2000;
  }
  return;
}

