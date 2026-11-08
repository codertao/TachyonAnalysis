
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* load a '3DPK' model pak with palette, refcounted cache */

int Pak_Load(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int local_9c [14];
  uint local_64;
  int local_60;
  int local_5c;
  int local_3c;
  
  DAT_00611084 = param_1;
  DAT_00669218 = param_1;
  DAT_006128a0 = param_2;
  piVar1 = (int *)FUN_004b07f0(param_1);
  if (piVar1 != (int *)0x0) {
    piVar1[5] = piVar1[5] + 1;
    DAT_00669218 = (char *)0x0;
    return *piVar1;
  }
  if (DAT_00668fcc != 0) {
    FUN_004b0730(param_1);
  }
  iVar2 = FUN_004a1310(param_1);
  if (iVar2 == -1) {
    DAT_00669218 = (char *)0x0;
    return 0;
  }
  FUN_004a1490(local_9c,0x9c);
  FUN_004a14f0(local_64,0);
  if (local_9c[0] != 0x4b504433) {
    FUN_004a1220();
    DAT_00669218 = (char *)0x0;
    return 0;
  }
  uVar6 = 0x9c - local_64;
  puVar9 = (undefined4 *)((int)local_9c + local_64);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  local_3c = 0x9c - local_64;
  iVar2 = (local_60 - local_64) + 0x9c;
  local_5c = local_5c + local_3c;
  local_64 = 0x9c;
  piVar3 = (int *)FUN_0049c5c0(iVar2);
  piVar1 = local_9c;
  piVar10 = piVar3;
  for (uVar7 = local_64 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *piVar10 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar10 = piVar10 + 1;
  }
  for (uVar7 = local_64 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)piVar10 = (char)*piVar1;
    piVar1 = (int *)((int)piVar1 + 1);
    piVar10 = (int *)((int)piVar10 + 1);
  }
  puVar4 = (undefined1 *)(local_64 + (int)piVar3);
  FUN_004a1490(puVar4,iVar2 - local_64);
  _strncpy((char *)(piVar3 + 0x1c),param_1,0x1f);
  _DAT_00668f94 = piVar3[10];
  if (DAT_0062c124 != 0) {
    puVar4 = (undefined1 *)FUN_0049c5c0(local_5c - local_60);
    FUN_004a1490(puVar4,local_5c - local_60);
  }
  FUN_004a1220();
  if ((0x2000 < piVar3[1]) && ((uint)piVar3[1] < 0x10001)) {
    Pak_SetPalette(piVar3,param_3);
    if (DAT_0062c124 != 0) {
      puVar9 = (undefined4 *)piVar3[0x19];
      if (puVar9 != (undefined4 *)0x0) {
        DAT_00668f90 = puVar9;
        FUN_004a2e40(puVar9 + 0xc0,puVar9 + 0x180);
        puVar9 = DAT_00668f90;
        puVar8 = DAT_00668f90;
        puVar11 = &DAT_00603180;
        for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        FUN_004ada90(puVar9,1);
        FUN_004a2e80();
      }
      Pak_LoadTextures(puVar4);
      FUN_0049c600(puVar4);
    }
    Pak_Relocate(piVar3);
    iVar2 = FUN_004b1450(piVar3);
    FUN_0049c600(piVar3);
    uVar5 = FUN_004b2370(iVar2,0);
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
    FUN_004afed0(iVar2);
    FUN_004b0840(iVar2,param_1);
    DAT_00669218 = (char *)0x0;
    return iVar2;
  }
  MessageBoxA(GLBL_WindowHandle_,s_This_PAK_file_is_an_incompatible_0055ec78,param_1,0);
  DAT_00669218 = (char *)0x0;
  return 0;
}

