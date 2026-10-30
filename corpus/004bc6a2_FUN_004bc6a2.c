
undefined4 FUN_004bc6a2(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  char *_Str2;
  undefined4 *puVar7;
  char local_8c [132];
  size_t local_8;
  
  iVar5 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
    return 0;
  }
  FUN_004c15cd(0x13);
  DAT_006caed8 = DAT_006caed8 + 1;
  while (DAT_006caedc != 0) {
    Sleep(1);
  }
  if (param_1 == 0) {
    local_8 = 1;
    param_1 = 0;
    if (param_2 == (char *)0x0) {
LAB_004bc8c8:
      uVar1 = FUN_004bca03();
    }
    else {
      if (((*param_2 == 'L') && (param_2[1] == 'C')) && (param_2[2] == '_')) {
        pcVar2 = (char *)FUN_004c1750(param_2,&DAT_0052f05c);
        _Str2 = param_2;
        while (((pcVar2 != (char *)0x0 && (local_8 = (int)pcVar2 - (int)_Str2, local_8 != 0)) &&
               (*pcVar2 != ';'))) {
          param_2 = (char *)0x1;
          ppuVar6 = &PTR_s_LC_COLLATE_0056158c;
          do {
            iVar5 = _strncmp(*ppuVar6,_Str2,local_8);
            if ((iVar5 == 0) && (sVar3 = _strlen(*ppuVar6), local_8 == sVar3)) break;
            param_2 = (char *)((int)param_2 + 1);
            ppuVar6 = ppuVar6 + 3;
          } while ((int)ppuVar6 < 0x5615bd);
          pcVar2 = pcVar2 + 1;
          sVar3 = FUN_004c1650(pcVar2,&DAT_0052f058);
          if ((sVar3 == 0) && (*pcVar2 != ';')) break;
          if ((int)param_2 < 6) {
            _strncpy(local_8c,pcVar2,sVar3);
            local_8c[sVar3] = '\0';
            iVar5 = FUN_004bc8e8(param_2,local_8c);
            if (iVar5 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pcVar2[sVar3] == '\0') || (_Str2 = pcVar2 + sVar3 + 1, *_Str2 == '\0'))
          goto LAB_004bc832;
          pcVar2 = (char *)FUN_004c1750(_Str2,&DAT_0052f05c);
        }
        FUN_004c162e(0x13);
        uVar1 = 0;
        goto LAB_004bc8d7;
      }
      iVar4 = FUN_004bcabc(param_2,local_8c,0,0,0);
      uVar1 = 0;
      if (iVar4 != 0) {
        puVar7 = &DAT_00561584;
        do {
          if (puVar7 != &DAT_00561584) {
            iVar4 = _strcmp(local_8c,(char *)*puVar7);
            if ((iVar4 == 0) || (iVar4 = FUN_004bc8e8(iVar5,local_8c), iVar4 != 0)) {
              param_1 = param_1 + 1;
            }
            else {
              local_8 = 0;
            }
          }
          puVar7 = puVar7 + 3;
          iVar5 = iVar5 + 1;
        } while ((int)puVar7 < 0x5615c1);
        if (local_8 == 0) {
LAB_004bc832:
          if (param_1 != 0) goto LAB_004bc8c8;
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_004bca03();
          FUN_004bd512(DAT_00561584);
          DAT_00561584 = 0;
        }
      }
    }
  }
  else if (param_2 == (char *)0x0) {
    uVar1 = (&DAT_00561584)[param_1 * 3];
  }
  else {
    uVar1 = FUN_004bc8e8(param_1,param_2);
  }
  FUN_004c162e(0x13);
LAB_004bc8d7:
  DAT_006caed8 = DAT_006caed8 + -1;
  return uVar1;
}

