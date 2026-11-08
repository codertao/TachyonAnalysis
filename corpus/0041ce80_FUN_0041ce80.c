
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ce80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 local_48 [68];
  
  FUN_00452180();
  str_sprintf(local_48,s_D____2_2f__Y____2_2f__P____2_2f_00534f68,
              (double)((float)DAT_005b9640 * _DAT_0052e6c0),
              (double)((float)DAT_005b9648 * _DAT_0052e6c4 * _DAT_0052e5d8),
              (double)((float)DAT_005b964c * _DAT_0052e6c4 * _DAT_0052e5d8));
  FUN_0048e970(local_48,DAT_005b2770,10,0x37,0xffff00,0xffff,0x10000,0);
  iVar6 = *DAT_005b95e0;
  if ((iVar6 == 0) || (iVar6 == GLBL_SOME_CONTEXT)) {
    iVar4 = *(int *)(GLBL_SOME_CONTEXT + 0x34);
    iVar5 = *(int *)(GLBL_SOME_CONTEXT + 0x38);
    iVar6 = *(int *)(GLBL_SOME_CONTEXT + 0x3c);
  }
  else {
    iVar4 = *(int *)(GLBL_SOME_CONTEXT + 0x34) - *(int *)(iVar6 + 0x34);
    iVar5 = *(int *)(GLBL_SOME_CONTEXT + 0x38) - *(int *)(iVar6 + 0x38);
    iVar6 = *(int *)(GLBL_SOME_CONTEXT + 0x3c) - *(int *)(iVar6 + 0x3c);
  }
  fVar1 = (float)*(int *)(GLBL_SOME_CONTEXT + 0x4c) * _DAT_0052e6c4 * _DAT_0052e5d8;
  fVar2 = (float)*(int *)(GLBL_SOME_CONTEXT + 0x50) * _DAT_0052e6c4 * _DAT_0052e5d8;
  fVar3 = (float)*(int *)(GLBL_SOME_CONTEXT + 0x54) * _DAT_0052e6c4 * _DAT_0052e5d8;
  str_sprintf(local_48,s_PLAYER_X____2_2f__Y____2_2f__Z___00534f40,
              (double)((float)iVar4 * _DAT_0052e6c0),(double)((float)iVar5 * _DAT_0052e6c0),
              (double)((float)iVar6 * _DAT_0052e6c0));
  FUN_0048e970(local_48,DAT_005b2770,10,0x46,0xffff00,0xffff,0x10000,0);
  str_sprintf(local_48,s_PLAYER_Y____2_2f__P____2_2f__R___00534f18,(double)fVar1,(double)fVar2,
              (double)fVar3);
  FUN_0048e970(local_48,DAT_005b2770,10,0x55,0xffff00,0xffff,0x10000,0);
  puVar7 = local_48;
  uVar8 = CONCAT44(DAT_005b31f0,s_QUAD____d_00534f0c);
  str_sprintf();
  FUN_0048e970(local_48,DAT_005b2770,10,100,0xffff00,0xffff,0x10000,0,puVar7,uVar8);
  str_sprintf(local_48,s_CAMERA_X____2_2f__Y____2_2f__Z___00534ee4,
              (double)((float)DAT_005b9600 * _DAT_0052e6c0),
              (double)((float)DAT_005b9604 * _DAT_0052e6c0),
              (double)((float)DAT_005b9608 * _DAT_0052e6c0));
  FUN_0048e970(local_48,DAT_005b2770,10,0x73,0xffff00,0xffff,0x10000,0);
  str_sprintf(local_48,s_CAMERA_Y____2_2f__P____2_2f__R___00534ebc,
              (double)((float)DAT_005b95e8 * _DAT_0052e6c4 * _DAT_0052e5d8),
              (double)((float)DAT_005b95ec * _DAT_0052e6c4 * _DAT_0052e5d8),
              (double)((float)DAT_005b95f0 * _DAT_0052e6c4 * _DAT_0052e5d8));
  FUN_0048e970(local_48,DAT_005b2770,10,0x82,0xffff00,0xffff,0x10000,0);
  return;
}

