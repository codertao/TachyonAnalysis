
void FUN_0040acd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  vec3 local_c;
  
  if ((((g_FlightStateFlags & 4) != 0) || (*(char *)(param_1 + 0xc2) != '\x02')) &&
     (((byte)DAT_005b3304 & 0xf) == 0)) {
    iVar2 = *(int *)(param_1 + 0x50) * 0x80 + *(int *)(GLBL_SOME_CONTEXT + 0x50) * -0x80;
    iVar4 = *(int *)(param_1 + 0x54) * 0x80 + *(int *)(GLBL_SOME_CONTEXT + 0x54) * -0x80;
    uVar5 = iVar2 >> 0x1f;
    if (((int)((iVar2 >> 7 ^ uVar5) - uVar5) < 0xe38e4) &&
       (uVar5 = iVar4 >> 0x1f, (int)((iVar4 >> 7 ^ uVar5) - uVar5) < 0xe38e4)) {
      FUN_004b21c0(param_1 + 0x18);
      iVar2 = Pak_GetAttachPoint(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_2 + 0x3c));
      piVar1 = *(int **)(iVar2 + 0xc);
      local_c.x = *(int *)(param_1 + 0x34) + *piVar1;
      local_c.y = piVar1[1] + *(int *)(param_1 + 0x38);
      local_c.z = piVar1[2] + *(int *)(param_1 + 0x3c);
      puVar6 = *(undefined **)(param_2 + 0x40);
      if (puVar6 == (undefined *)0x0) {
        puVar6 = &DAT_00640000;
      }
      if (local_c.y + 0x14000 < *(int *)(GLBL_SOME_CONTEXT + 0x38)) {
        puVar3 = (undefined *)distance_between(&local_c,(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
        if (puVar3 < puVar6) {
          DAT_005b3340 = param_1;
        }
      }
    }
  }
  return;
}

