
void FUN_00492680(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint local_34;
  undefined1 local_30 [8];
  undefined4 local_28 [10];
  
  puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_VON_OPTIONS_00559f98,s_VON_OPTIONS_00559f98);
  puVar5 = local_28;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar3 = FUN_004ae560(*puVar2,DAT_005657a0,local_34 | 2,local_28);
  local_28[0] = 0x14000;
  local_28[1] = 0x14000;
  iVar4 = FUN_004ae560(*puVar2,DAT_005657a4,local_34 | 2,local_28);
  FUN_0041f6e0(DAT_005657a8,200,0xb4,0xfa,0x82,0x80,DAT_005657a4,*puVar2,0xff0000,0x14000,2);
  iVar7 = iVar4 + 0xb4;
  if (PTR_s_VON_OPTIONS_00559ef0 != (undefined *)0x0) {
    piVar9 = &DAT_00559f04;
    do {
      iVar7 = iVar7 + iVar3;
      puVar5 = (undefined4 *)piVar9[1];
      if (puVar5 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,*puVar5,puVar5[1]);
        FUN_0048e970(*puVar5,DAT_005657a0,0x140,iVar7,0xffffff,0xffff,0x14000,6);
        iVar7 = iVar7 + iVar4;
      }
      iVar8 = ((DAT_005657ac != piVar9 + -5) - 1 & 0xfe01) + 0xff00ff;
      puVar5 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,piVar9[-5],piVar9[-4]);
      FUN_0048e970(*puVar5,DAT_005657a0,0xd2,iVar7,iVar8,0xffff,0x10000,2);
      iVar1 = *piVar9;
      if (iVar1 == 0) {
        if ((undefined4 *)piVar9[-3] != (undefined4 *)0x0) {
          str_sprintf(local_30,&DAT_00535eb8,*(undefined4 *)piVar9[-3]);
          puVar10 = local_30;
          goto LAB_0049286b;
        }
      }
      else {
        piVar6 = (int *)Rtxt_Lookup(DAT_005a6140,*(undefined4 *)(iVar1 + *(int *)piVar9[-3] * 8),
                                    *(undefined4 *)(iVar1 + 4 + *(int *)piVar9[-3] * 8));
        puVar10 = (undefined1 *)*piVar6;
LAB_0049286b:
        FUN_0048e970(puVar10,DAT_005657a0,0x1b8,iVar7,iVar8,0xffff,0x10000,10);
      }
      piVar6 = piVar9 + 4;
      piVar9 = piVar9 + 9;
    } while (*piVar6 != 0);
  }
  iVar7 = iVar3 * -2 + 0x131;
  puVar5 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_VON_OPTIONS_00559f98,s_VON_FOOTER_00559fb0);
  FUN_0048e970(*puVar5,DAT_005657a0,0x140,iVar7,0xff0000,0xffff,0x10000,6);
  puVar5 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_VON_OPTIONS_00559f98,s_VON_FOOTER2_00559fa4);
  FUN_0048e970(*puVar5,DAT_005657a0,0x140,iVar7 + iVar3,0xff0000,0xffff,0x10000,6);
  return;
}

