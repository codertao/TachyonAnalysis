
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002710(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  int local_5c [4];
  int local_4c [5];
  ushort local_38;
  short local_1c;
  short local_1a;
  short local_6;
  
  if (DAT_10007698 != (int *)0x0) {
    sprintf((char *)local_5c,s__08x__04x_10007014,0,0);
    iVar2 = 0;
    piVar5 = DAT_10007698;
    if (0 < DAT_1000769c) {
      do {
        if (*(short *)((int)piVar5 + 0x12) != 0) {
          iVar4 = 4;
          bVar8 = true;
          piVar6 = piVar5;
          piVar7 = local_5c;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar8 = *piVar6 == *piVar7;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            bVar8 = true;
            goto LAB_1000277e;
          }
        }
        iVar2 = iVar2 + 1;
        piVar5 = (int *)((int)piVar5 + 0x4a);
      } while (iVar2 < DAT_1000769c);
    }
    bVar8 = false;
    piVar5 = FUN_100025a0();
LAB_1000277e:
    if (piVar5 != (int *)0x0) {
      iVar2 = 0x12;
      if (bVar8) {
        piVar6 = piVar5;
        piVar7 = local_4c;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        *(short *)piVar7 = (short)*piVar6;
      }
      else {
        piVar6 = local_4c;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        *(undefined2 *)piVar6 = 0;
      }
      piVar6 = piVar5;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      *(undefined2 *)piVar6 = 0;
      *(undefined2 *)((int)piVar5 + 0x12) = 1;
      *piVar5 = local_5c[0];
      piVar5[1] = local_5c[1];
      piVar5[2] = local_5c[2];
      *(undefined2 *)(piVar5 + 4) = 1;
      piVar5[3] = local_5c[3];
      DVar3 = timeGetTime();
      piVar5[6] = DVar3;
      piVar5[8] = s_________________10007050._0_4_;
      piVar5[9] = s_________________10007050._4_4_;
      piVar5[10] = s_________________10007050._8_4_;
      piVar5[0xb] = s_________________10007050._12_4_;
      if (DAT_10019874 == 0) {
        *(undefined2 *)(piVar5 + 0xc) = 0;
      }
      else {
        *(short *)(piVar5 + 0xc) =
             ((short)(DAT_10019878 / 1000) + (short)(DAT_10019878 >> 0x1f)) -
             (short)((longlong)DAT_10019878 * 0x10624dd3 >> 0x3f);
      }
      *(undefined2 *)((int)piVar5 + 0x32) = 0;
      piVar5[0xd] = 0;
      *(undefined2 *)(piVar5 + 5) = 0x61;
      if (param_1 == 3) {
        *(byte *)(piVar5 + 5) = *(byte *)(piVar5 + 5) | 1;
      }
      else if (param_1 == 2) {
        *(byte *)(piVar5 + 5) = *(byte *)(piVar5 + 5) | 0x10;
      }
      uVar1 = DAT_1001986c;
      *(short *)(piVar5 + 0xc) = (short)piVar5[0xc] + local_1c;
      *(short *)((int)piVar5 + 0x32) = *(short *)((int)piVar5 + 0x32) + local_1a;
      *(undefined2 *)((int)piVar5 + 0x46) = uVar1;
      *(ushort *)(piVar5 + 5) = *(ushort *)(piVar5 + 5) | local_38;
      *(short *)((int)piVar5 + 0x46) = *(short *)((int)piVar5 + 0x46) + local_6;
      NwUsage_SendRecord(piVar5,0);
    }
    DAT_10019874 = timeGetTime();
    _DAT_1001986c = 0;
  }
  return;
}

