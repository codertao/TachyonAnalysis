
void FUN_0043f190(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 local_8;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x10c) & 0x20000) == 0)) {
    iVar2 = *(int *)(param_2 + 0xc4);
    iVar3 = *(int *)(param_2 + 0xd0);
    iVar4 = *(int *)(param_2 + 200);
    iVar5 = *(int *)(param_2 + 0xcc);
    iVar6 = *(int *)(param_2 + 0xd4);
    iVar7 = param_4 + iVar4;
    if (iVar6 != 0) {
      if (*(int *)(param_2 + 0x110) != 0) {
        param_4 = *(int *)(iVar6 + 0x1684);
        local_8 = *(undefined4 *)(iVar6 + 0x167c);
        FUN_00437bf0(iVar6 + 0x167c,8);
        FUN_00437bf0(*(int *)(param_2 + 0xd4) + 0x167c,4);
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + 0x1684) = *(undefined4 *)(param_2 + 0x110);
        if (*(int *)(param_2 + 0x110) == 0) {
          iVar6 = *(int *)(param_2 + 0xd4);
          uVar9 = 4;
        }
        else {
          iVar6 = *(int *)(param_2 + 0xd4);
          uVar9 = 8;
        }
        FUN_00437c10(iVar6 + 0x167c,uVar9);
        if (*(int *)(*(int *)(param_2 + 0xd4) + 0x60) != 0) {
          puVar8 = (uint *)(*(int *)(param_2 + 0xd4) + 0x6c);
          do {
            FUN_00437bf0(puVar8,0x10);
            FUN_00437bf0(puVar8,0x2000000);
            FUN_00437bf0(puVar8,0x200000);
            if ((*(byte *)(*(int *)(param_2 + 0xd4) + 0x167c) & 4) != 0) {
              *puVar8 = *puVar8 | 0x10;
            }
            if ((*(byte *)(*(int *)(param_2 + 0xd4) + 0x167c) & 8) != 0) {
              *puVar8 = *puVar8 | 0x2000000;
            }
            if ((*(byte *)(*(int *)(param_2 + 0xd4) + 0x167c) & 0x10) != 0) {
              *puVar8 = *puVar8 | 0x200000;
            }
            puVar1 = puVar8 + 8;
            puVar8 = puVar8 + 0xb;
          } while (*puVar1 != 0);
        }
      }
      FUN_0043a160(*(undefined4 *)(param_2 + 0xd4),iVar2 + param_3,iVar7,
                   *(undefined4 *)(param_2 + 0xe0),iVar5 - iVar2,iVar3 - iVar4);
      if (*(int *)(param_2 + 0x110) != 0) {
        *(int *)(*(int *)(param_2 + 0xd4) + 0x1684) = param_4;
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + 0x167c) = local_8;
        if (*(int *)(*(int *)(param_2 + 0xd4) + 0x60) != 0) {
          puVar8 = (uint *)(*(int *)(param_2 + 0xd4) + 0x6c);
          do {
            FUN_00437bf0(puVar8,0x10);
            FUN_00437bf0(puVar8,0x2000000);
            FUN_00437bf0(puVar8,0x200000);
            if ((*(byte *)(*(int *)(param_2 + 0xd4) + 0x167c) & 4) != 0) {
              *puVar8 = *puVar8 | 0x10;
            }
            if ((*(byte *)(*(int *)(param_2 + 0xd4) + 0x167c) & 8) != 0) {
              *puVar8 = *puVar8 | 0x2000000;
            }
            if ((*(byte *)(*(int *)(param_2 + 0xd4) + 0x167c) & 0x10) != 0) {
              *puVar8 = *puVar8 | 0x200000;
            }
            puVar1 = puVar8 + 8;
            puVar8 = puVar8 + 0xb;
          } while (*puVar1 != 0);
        }
      }
    }
    if (DAT_00564ae4 == 0) {
      FUN_00437bf0(param_2 + 0x10c,0x400);
    }
  }
  return;
}

