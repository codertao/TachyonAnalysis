
void __cdecl FUN_100029d0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int local_3c [4];
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  int local_24;
  int local_20 [5];
  undefined2 local_c;
  int local_8;
  undefined4 local_4;
  
  if ((short)param_1[7] == 0xd) {
    iVar1 = FUN_10002980(param_1 + 1);
    if (iVar1 != 0) {
      piVar4 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      local_20[0] = param_1[1];
      local_20[1] = param_1[2];
      local_20[2] = param_1[3];
      local_20[3] = param_1[4];
      local_8 = param_1[5];
      local_c = 0xe;
      if (*(int *)(iVar1 + 0xa4) != 0) {
        local_4 = *(undefined4 *)(*(int *)(iVar1 + 0xa4) + 4);
      }
      if (DAT_10007060 != 0) {
        FUN_10005240((char *)local_20,0x20,DAT_10007060,DAT_10007064);
        return;
      }
    }
  }
  else {
    iVar1 = 0;
    piVar4 = DAT_10007698;
    if (0 < DAT_1000769c) {
      do {
        if ((*(short *)((int)piVar4 + 0x12) != 0) && (param_1[6] == piVar4[6])) {
          iVar3 = 4;
          bVar7 = true;
          piVar5 = piVar4;
          piVar6 = param_1;
          do {
            piVar6 = piVar6 + 1;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar7 = *piVar6 == *piVar5;
            piVar5 = piVar5 + 1;
          } while (bVar7);
          if (bVar7) {
            if ((short)param_1[7] != 2) {
              return;
            }
            if (((short)piVar4[4] != 1) && ((short)piVar4[4] != 3)) {
              return;
            }
            piVar4[7] = param_1[5];
            *(undefined2 *)(piVar4 + 4) = 3;
            piVar6 = local_3c;
            for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar6 = 0;
              piVar6 = piVar6 + 1;
            }
            local_3c[0] = *piVar4;
            local_3c[1] = piVar4[1];
            local_3c[2] = piVar4[2];
            local_3c[3] = piVar4[3];
            local_2c = piVar4[6];
            local_28 = (undefined2)piVar4[4];
            local_26 = (undefined2)piVar4[5];
            local_24 = piVar4[7];
            if (DAT_10007060 != 0) {
              FUN_10005240((char *)local_3c,0x1c,DAT_10007060,DAT_10007064);
            }
            DVar2 = timeGetTime();
            *(DWORD *)((int)piVar4 + 0x3e) = DVar2;
            return;
          }
        }
        iVar1 = iVar1 + 1;
        piVar4 = (int *)((int)piVar4 + 0x4a);
        if (DAT_1000769c <= iVar1) {
          return;
        }
      } while( true );
    }
  }
  return;
}

