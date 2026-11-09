
void __cdecl FUN_10002b80(int param_1,int param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int local_4c [5];
  ushort local_38;
  short local_1c;
  short local_1a;
  short local_6;
  
  iVar3 = 0;
  if ((((DAT_10007698 != (int *)0x0) && (param_1 != 0)) && (*(int *)(param_1 + 0x9c) != 0)) &&
     (*(int *)(param_1 + 0x98) != 0)) {
    bVar2 = false;
    piVar6 = DAT_10007698;
    if (0 < DAT_1000769c) {
      do {
        if (*(short *)((int)piVar6 + 0x12) != 0) {
          iVar5 = 4;
          bVar9 = true;
          piVar7 = piVar6;
          piVar8 = (int *)(param_1 + 0x88);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar9 = *piVar7 == *piVar8;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (bVar9);
          if (bVar9) {
            bVar2 = true;
            goto LAB_10002bfd;
          }
        }
        iVar3 = iVar3 + 1;
        piVar6 = (int *)((int)piVar6 + 0x4a);
      } while (iVar3 < DAT_1000769c);
    }
    piVar6 = FUN_100025a0();
LAB_10002bfd:
    if (piVar6 != (int *)0x0) {
      iVar3 = 0x12;
      if (bVar2) {
        piVar7 = piVar6;
        piVar8 = local_4c;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        *(short *)piVar8 = (short)*piVar7;
      }
      else {
        piVar7 = local_4c;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        *(undefined2 *)piVar7 = 0;
      }
      piVar7 = piVar6;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      *(undefined2 *)piVar7 = 0;
      *(undefined2 *)((int)piVar6 + 0x12) = 1;
      *piVar6 = *(int *)(param_1 + 0x88);
      piVar6[1] = *(int *)(param_1 + 0x8c);
      piVar6[2] = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x94);
      *(undefined2 *)(piVar6 + 4) = 1;
      piVar6[3] = iVar3;
      DVar4 = timeGetTime();
      piVar6[6] = DVar4;
      piVar6[8] = s_________________10007050._0_4_;
      piVar6[9] = s_________________10007050._4_4_;
      piVar6[10] = s_________________10007050._8_4_;
      piVar6[0xb] = s_________________10007050._12_4_;
      *(undefined2 *)(piVar6 + 0xc) = *(undefined2 *)(param_1 + 0xac);
      *(undefined2 *)((int)piVar6 + 0x32) = *(undefined2 *)(param_1 + 0xb0);
      if (*(int *)(param_1 + 0xa4) != 0) {
        piVar6[0xd] = *(int *)(*(int *)(param_1 + 0xa4) + 4);
      }
      if (param_2 == 3) {
        *(byte *)(piVar6 + 5) = *(byte *)(piVar6 + 5) | 1;
      }
      else if (param_2 == 2) {
        *(byte *)(piVar6 + 5) = *(byte *)(piVar6 + 5) | 0x10;
      }
      uVar1 = *(undefined2 *)(param_1 + 0xb8);
      *(short *)(piVar6 + 0xc) = (short)piVar6[0xc] + local_1c;
      *(short *)((int)piVar6 + 0x32) = *(short *)((int)piVar6 + 0x32) + local_1a;
      *(undefined2 *)((int)piVar6 + 0x46) = uVar1;
      *(ushort *)(piVar6 + 5) = *(ushort *)(piVar6 + 5) | local_38;
      *(short *)((int)piVar6 + 0x46) = *(short *)((int)piVar6 + 0x46) + local_6;
      FUN_10002620(piVar6,0);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}

