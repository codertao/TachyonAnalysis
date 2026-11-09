
undefined4 __cdecl FUN_10005660(char *param_1)

{
  char cVar1;
  int _FindHandle;
  FARPROC pFVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_21c [260];
  undefined1 local_118 [20];
  char local_104 [260];
  
  DAT_100096a8 = (FARPROC)0x0;
  DAT_100096ac = (FARPROC)0x0;
  if (param_1 == (char *)0x0) {
    _FindHandle = findfirst(s_CMPRSS___DLL_10007688,local_118);
    _findclose(_FindHandle);
    if (_FindHandle == -1) {
      return 0x67;
    }
    param_1 = local_104;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = local_21c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  DAT_100096b0 = LoadLibraryA(local_21c);
  if (DAT_100096b0 == (HMODULE)0x0) {
    return 0x68;
  }
  pFVar2 = GetProcAddress(DAT_100096b0,s_init_compression_10007674);
  DAT_100096a8 = GetProcAddress(DAT_100096b0,s_compress_buffer_10007664);
  DAT_100096ac = GetProcAddress(DAT_100096b0,s_expand_buffer_10007654);
  if (((pFVar2 != (FARPROC)0x0) && (DAT_100096a8 != (FARPROC)0x0)) && (DAT_100096ac != (FARPROC)0x0)
     ) {
    (*pFVar2)();
    DAT_10019860 = 1;
    return 0;
  }
  FreeLibrary(DAT_100096b0);
  return 0x69;
}

