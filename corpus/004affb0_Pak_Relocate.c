
/* fix up loaded 3DPK offsets (parts/LODs), collision if flags +0x28 & 1 */

void Pak_Relocate(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined *puVar11;
  bool bVar12;
  uint local_8;
  
  DAT_00668f6c = 0;
  DAT_00668f70 = (undefined4 *)0x0;
  Str_TrimTrailingSpaces(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x38) + param_1;
  *(int *)(param_1 + 0x90) = iVar3;
  local_8 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    piVar4 = (int *)(iVar3 + 4);
    do {
      iVar3 = *piVar4 + *(int *)(param_1 + 0x60) + param_1;
      DAT_00611080 = local_8;
      *piVar4 = iVar3;
      DAT_006140c0 = 0;
      uVar9 = 0;
      piVar1 = (int *)(iVar3 + 0xc);
      puVar11 = &DAT_00668920;
      piVar10 = piVar1;
      if (*(int *)(iVar3 + 4) != 0) {
        do {
          *piVar10 = *piVar10 + *(int *)(param_1 + 0x60) + param_1;
          if ((piVar10[8] != 0) &&
             (piVar5 = (int *)(piVar10[8] + (int)piVar1), piVar10[8] = (int)piVar5, piVar5 == piVar1
             )) {
            piVar10[8] = 0;
          }
          if (piVar10[9] != 0) {
            piVar10[9] = piVar10[9] + (int)piVar1;
          }
          if ((uVar9 == 0) && (1 < *(uint *)(iVar3 + 4))) {
            *(char *)((int)piVar10 + 0x1b) = (char)*(uint *)(iVar3 + 4) + -1;
            piVar10[9] = (int)(piVar10 + 0xb);
          }
          piVar10[10] = (int)(&DAT_00666b20 + uVar9 * 0x3c);
          Mesh_Relocate(*piVar10);
          if ((*(byte *)(piVar10 + 4) & 2) != 0) {
            Mat_RemapColorIndex(piVar10);
          }
          iVar2 = *piVar10;
          uVar6 = 0;
          if (*(int *)(iVar2 + 0x40) != 0) {
            puVar8 = (undefined4 *)(*(int *)(iVar2 + 0x58) + 0xc);
            do {
              *puVar8 = puVar11;
              uVar6 = uVar6 + 1;
              puVar8 = puVar8 + 4;
              puVar11 = puVar11 + 0xc;
            } while (uVar6 < *(uint *)(iVar2 + 0x40));
          }
          uVar9 = uVar9 + 1;
          piVar10 = piVar10 + 0xb;
        } while (uVar9 < *(uint *)(iVar3 + 4));
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 2;
    } while (local_8 < *(uint *)(param_1 + 0x2c));
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    Pak_RelocCollision(param_1);
  }
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    Pak_RelocStates(param_1);
  }
  bVar12 = DAT_00668f6c != 0;
  *(int *)(param_1 + 0x68) = DAT_00668f6c;
  if (bVar12) {
    puVar7 = (undefined4 *)
             Mem_AllocChecked(DAT_00668f6c * 4,4,0,s_PAK_TEXTURE_PTRS_0055ebdc,DAT_00668f58);
    *(undefined4 **)(param_1 + 0x6c) = puVar7;
    puVar8 = DAT_00668f70;
    for (iVar3 = DAT_00668f6c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    Mem_FreeToMain(DAT_00668f70);
  }
  return;
}

