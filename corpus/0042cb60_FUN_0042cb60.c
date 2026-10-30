
void FUN_0042cb60(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [128];
  
  uVar1 = Cbin_CountEntries(s_IMAGES_005355cc,s_IMAGE_005355d4);
  *param_1 = uVar1;
  FUN_0048e3d0(param_1 + 1,uVar1 * 0x3c,4,s_HUD_IMAGE_ARRAY_0053682c,0xd400);
  Cbin_SelectGroup(s_IMAGES_005355cc);
  uVar1 = param_1[1];
  local_a4 = 0;
  if (*param_1 != 0) {
    iVar4 = uVar1 + 0x24;
    do {
      FUN_0049bdb0(s_IMAGE_005355d4,iVar4,0x18,0,4,1);
      FUN_0049b930(s_IMAGE_005355d4,local_90,0x10,0,4,2);
      FUN_0049b930(s_IMAGE_005355d4,local_a0,0x10,0,4,3);
      FUN_0049b930(s_IMAGE_005355d4,local_80,0x80,0,4,4);
      uVar2 = FUN_0042c960(local_80,&PTR_s_ALPHACOLOR_005364e0);
      iVar3 = FUN_004c67c0(local_a0,s_NOPAL_00536824);
      if (iVar3 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = local_a0;
      }
      FUN_004279b0(uVar1,local_90,0,puVar5,uVar2);
      local_a4 = local_a4 + 1;
      uVar1 = uVar1 + 0x3c;
      iVar4 = iVar4 + 0x3c;
    } while (local_a4 < *param_1);
  }
  return;
}

