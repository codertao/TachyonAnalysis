
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004398b0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  uint local_20;
  uint local_1c;
  uint local_14;
  int local_10;
  int local_8;
  
  iVar3 = param_2;
  local_1c = 0;
  if ((param_2 != 0) && (iVar4 = FUN_004c67c0(param_2,&DAT_0053f1e4), iVar4 != 0)) {
    iVar4 = FUN_004c67c0(param_2 + 0x40,&DAT_0053f1e4);
    if (iVar4 != 0) {
      if (*(int *)(param_2 + 0x1674) != 0) {
        FUN_00439f70(param_1,param_2);
      }
      uVar5 = FUN_004ad650(param_2 + 0x1654);
      *(undefined4 *)(param_2 + 0x1650) = uVar5;
      FUN_004ad900(uVar5,0x80,0x80,0x80,0x80,0x80);
      iVar4 = FUN_004a2eb0(param_2 + 0x40);
      *(uint *)(param_2 + 0x1664) = _DAT_00603100;
      *(uint *)(param_2 + 0x1668) = DAT_00603104;
      *(undefined4 *)(param_2 + 0x1674) = DAT_00603108;
      if ((*(int *)(param_2 + 0x166c) == 0) || (*(int *)(param_2 + 0x166c) == -1)) {
        *(undefined4 *)(param_2 + 0x166c) = *(undefined4 *)(param_2 + 0x1664);
      }
      if ((*(int *)(param_2 + 0x1670) == 0) || (*(int *)(param_2 + 0x1670) == -1)) {
        *(undefined4 *)(param_2 + 0x1670) = *(undefined4 *)(param_2 + 0x1668);
      }
      uVar8 = *(uint *)(param_2 + 0x1670);
      uVar7 = (int)*(uint *)(param_2 + 0x166c) >> 8;
      uVar9 = (int)uVar8 >> 8;
      uVar6 = *(uint *)(param_2 + 0x166c) & 0x800000ff;
      bVar12 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar12 = (uVar6 - 1 | 0xffffff00) == 0xffffffff;
      }
      if (!bVar12) {
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar8 & 0x800000ff;
      bVar12 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar12 = (uVar6 - 1 | 0xffffff00) == 0xffffffff;
      }
      if (!bVar12) {
        uVar9 = uVar9 + 1;
      }
      piVar11 = (int *)(param_2 + 0x50);
      if ((uVar7 == 1) && (uVar9 == 1)) {
        iVar1 = 0x1f;
        if (_DAT_00603100 != 0) {
          for (; _DAT_00603100 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar2 = 0x1f;
        if (DAT_00603104 != 0) {
          for (; DAT_00603104 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        param_2._0_1_ = (undefined1)iVar1;
        param_1._0_1_ = (undefined1)iVar2;
        *(undefined1 *)(iVar3 + 0x68) = (undefined1)param_2;
        *(undefined1 *)(iVar3 + 0x69) = (undefined1)param_1;
        *(undefined4 *)(iVar3 + 0x6c) = 0x30000008;
        *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar3 + 0x166c);
        *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0x1670);
        *piVar11 = 0;
        *(undefined4 *)(iVar3 + 0x54) = 0;
        FUN_0048e3d0((undefined4 *)(iVar3 + 0x60),DAT_00603104 * _DAT_00603100,4,
                     s_MNU_PCX_IMAGE_0053fe50,0xa000);
        if ((*(byte *)(iVar3 + 0x167c) & 4) != 0) {
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x10;
        }
        if ((*(byte *)(iVar3 + 0x167c) & 8) != 0) {
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x2000000;
        }
        if ((*(byte *)(iVar3 + 0x167c) & 0x10) != 0) {
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x200000;
        }
        if ((*(byte *)(iVar3 + 0x167c) & 0x20) != 0) {
          *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x20000;
          *(int *)(iVar3 + 100) = param_3;
        }
        FUN_0043a680(iVar4,DAT_00603110,_DAT_00603100);
        FUN_0043a6a0(*(undefined4 *)(iVar3 + 0x60),8,_DAT_00603100);
        FUN_0043a6c0(0,0,_DAT_00603100,DAT_00603104,0,0);
      }
      else {
        local_10 = 0;
        local_14 = 0;
        if (uVar9 != 0) {
          do {
            param_1 = 0x100;
            if (uVar8 < 0x101) {
              param_1 = uVar8;
            }
            uVar8 = uVar8 - param_1;
            uVar6 = *(uint *)(param_2 + 0x166c);
            local_8 = 0;
            local_20 = 0;
            if (uVar7 != 0) {
              do {
                uVar10 = 0x100;
                if (uVar6 < 0x101) {
                  uVar10 = uVar6;
                }
                uVar6 = uVar6 - uVar10;
                FUN_00439810(uVar10,param_1,piVar11 + 6,(byte *)((int)piVar11 + 0x19));
                piVar11[1] = local_10;
                *piVar11 = local_8;
                piVar11[3] = param_1;
                piVar11[2] = uVar10;
                piVar11[7] = 0x30000008;
                FUN_0048e3d0(piVar11 + 4,
                             (1 << (*(byte *)((int)piVar11 + 0x19) & 0x1f)) *
                             (1 << (*(byte *)(piVar11 + 6) & 0x1f)),4,s_MNU_PCX_IMAGE_0053fe50,
                             0xa000);
                if ((*(byte *)(param_2 + 0x167c) & 4) != 0) {
                  piVar11[7] = piVar11[7] | 0x10;
                }
                if ((*(byte *)(param_2 + 0x167c) & 8) != 0) {
                  piVar11[7] = piVar11[7] | 0x2000000;
                }
                if ((*(byte *)(param_2 + 0x167c) & 0x10) != 0) {
                  piVar11[7] = piVar11[7] | 0x200000;
                }
                if ((*(byte *)(param_2 + 0x167c) & 0x20) != 0) {
                  piVar11[7] = piVar11[7] | 0x20000;
                  piVar11[5] = param_3;
                }
                FUN_0043a680(iVar4,DAT_00603110,_DAT_00603100);
                FUN_0043a6a0(piVar11[4],8,1 << (*(byte *)(piVar11 + 6) & 0x1f));
                FUN_0043a6c0(0,0,uVar10,param_1,*piVar11,piVar11[1]);
                local_8 = local_8 + uVar10;
                local_1c = local_1c + 1;
                if (0x7f < local_1c) {
                  if (iVar4 == 0) {
                    return;
                  }
                  FUN_0049c530(iVar4);
                  return;
                }
                local_20 = local_20 + 1;
                piVar11 = piVar11 + 0xb;
              } while (local_20 < uVar7);
            }
            local_10 = local_10 + param_1;
            local_14 = local_14 + 1;
          } while (local_14 < uVar9);
        }
      }
      if (iVar4 != 0) {
        FUN_0049c530(iVar4);
      }
    }
  }
  return;
}

