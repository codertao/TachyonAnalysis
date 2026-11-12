
/* CRT */

undefined4 ___crtsetenv(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)__mbschr(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_00564f98 == DAT_00564f9c) {
    DAT_00564f98 = (int *)_copy_environ(DAT_00564f98);
  }
  if (DAT_00564f98 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_00564fa0 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_00564f98 = _malloc(4);
      if (DAT_00564f98 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_00564f98 = 0;
      if (DAT_00564fa0 == (undefined4 *)0x0) {
        DAT_00564fa0 = _malloc(4);
        if (DAT_00564fa0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_00564fa0 = 0;
      }
    }
    else {
      iVar2 = ___wtomb_environ();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_00564f98;
  iVar2 = _findenv(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)_realloc(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_004c7fa4;
    }
    piVar5 = piVar3 + iVar2;
    _free(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)_realloc(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_004c7fa4;
  }
  DAT_00564f98 = piVar3;
LAB_004c7fa4:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      _strcpy(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      _free(lpName);
    }
  }
  return 0;
}

