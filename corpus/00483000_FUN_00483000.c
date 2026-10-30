
void __fastcall FUN_00483000(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint local_4;
  
  uVar2 = 0;
  piVar3 = &DAT_0056fc20;
  local_4 = param_1;
  do {
    if ((char)piVar3[-0x58] != '\0') {
      if (*piVar3 == 0) {
        if (piVar3[2] == 0) {
          str_sprintf(&DAT_005a41e0,s_TxtSPCallout_d_0055785c,uVar2);
          FUN_0043e6a0(&DAT_00583420,&DAT_005a41e0,piVar3 + -0x38);
          FUN_0043e6f0(&DAT_00583420,&DAT_005a41e0,piVar3[-0x18],piVar3[-0x17]);
          FUN_0043e580(&DAT_00583420,&DAT_005a41e0,piVar3 + -0x48);
          FUN_0043e670(&DAT_00583420,&DAT_005a41e0,0x10000);
          FUN_0043b990(&DAT_00583420,piVar3 + -0x48,piVar3 + -0x38,0,&local_4);
          local_4 = local_4 >> 1;
          piVar1 = piVar3 + -0x10;
          FUN_00483f60(piVar3[-0x18] + -5,local_4 + piVar3[-0x17],piVar3[-0x16],piVar3[-0x15],piVar1
                      );
          if ((piVar3[-0x14] != -1) && (piVar3[-0x13] != -1)) {
            FUN_00483f60(piVar3[-0x18] + -5,local_4 + piVar3[-0x17],piVar3[-0x14],piVar3[-0x13],
                         piVar1);
          }
          if ((piVar3[-0x12] != -1) && (piVar3[-0x11] != -1)) {
            FUN_00483f60(piVar3[-0x18] + -5,local_4 + piVar3[-0x17],piVar3[-0x12],piVar3[-0x11],
                         piVar1);
          }
          piVar3[2] = 1;
        }
      }
      else {
        *piVar3 = *piVar3 + -1;
      }
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x5b;
  } while (uVar2 < 0x10);
  return;
}

