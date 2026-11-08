
void FUN_004bfe3e(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_8;
  
  init_andor_enter_crit_section_idx(0xc);
  DAT_00561938 = 0xffffffff;
  DAT_00561928 = 0xffffffff;
  DAT_00564fc8 = 0;
  _Str1 = (char *)FUN_004c63ba(&DAT_0052f168);
  if (_Str1 == (char *)0x0) {
    leave_crit_section_idx(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00564fd0);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_00561890 = DAT_00564fd0 * 0x3c;
    DAT_00564fc8 = 1;
    if (DAT_00565016 != 0) {
      DAT_00561890 = DAT_00561890 + DAT_00565024 * 0x3c;
    }
    if ((DAT_0056506a == 0) || (DAT_00565078 == 0)) {
      DAT_00561894 = 0;
      DAT_00561898 = 0;
    }
    else {
      DAT_00561894 = 1;
      DAT_00561898 = (DAT_00565078 - DAT_00565024) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_00565148,0x220,(LPCWSTR)&DAT_00564fd4,-1,PTR_DAT_0056191c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_0056191c = 0;
    }
    else {
      PTR_DAT_0056191c[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_00565148,0x220,(LPCWSTR)&DAT_00565028,-1,PTR_DAT_00561920,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_00561920[0x3f] = 0;
      return;
    }
LAB_004c00af:
    *PTR_DAT_00561920 = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_0056507c == (char *)0x0 || (iVar4 = _strcmp(_Str1,DAT_0056507c), iVar4 != 0)))) {
      FUN_004bd512(DAT_0056507c);
      sVar5 = _strlen(_Str1);
      DAT_0056507c = _malloc(sVar5 + 1);
      if (DAT_0056507c != (char *)0x0) {
        FUN_004c1790(DAT_0056507c,_Str1);
        leave_crit_section_idx(0xc);
        _strncpy(PTR_DAT_0056191c,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_0056191c[3] = 0;
        cVar1 = *_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 4;
        }
        iVar4 = FUN_004bd2a4(_Source);
        DAT_00561890 = iVar4 * 0xe10;
        for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar4 = FUN_004bd2a4(_Source);
          DAT_00561890 = DAT_00561890 + iVar4 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar4 = FUN_004bd2a4(_Source);
            DAT_00561890 = DAT_00561890 + iVar4;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_00561890 = -DAT_00561890;
        }
        DAT_00561894 = (int)*_Source;
        if (DAT_00561894 != 0) {
          _strncpy(PTR_DAT_00561920,_Source,3);
          PTR_DAT_00561920[3] = 0;
          return;
        }
        goto LAB_004c00af;
      }
    }
    leave_crit_section_idx(0xc);
  }
  return;
}

