
undefined4 __cdecl FUN_10004e20(char *param_1)

{
  char cVar1;
  byte bVar2;
  FILE *_File;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  char local_100 [256];
  
  _File = fopen(param_1,&DAT_1000702c);
  if (_File == (FILE *)0x0) {
    return 0x65;
  }
  DAT_100096b8 = 0;
  bVar2 = (byte)_File->_flag;
  while ((bVar2 & 0x10) == 0) {
    pcVar5 = local_100;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    fgets(local_100,0x100,_File);
    if ((_File->_flag & 0x20) != 0) break;
    uVar4 = 0xffffffff;
    pcVar5 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((((8 < ~uVar4 - 1) &&
         (sscanf(local_100,s__d__d__d__d__d_10007634,&local_104,&local_10c,&local_114,&local_110,
                 &local_108), local_104 < 0x100)) && (local_10c < 0x100)) &&
       (((local_114 < 0x100 && (local_110 < 0x100)) && ((local_108 != 0 && (local_108 < 0x101))))))
    {
      (&DAT_100076a8)[DAT_100096b8 * 2] =
           ((local_104 * 0x100 + local_10c) * 0x100 + local_114) * 0x100 + local_110;
      (&DAT_100076ac)[DAT_100096b8 * 2] = local_108;
      DAT_100096b8 = DAT_100096b8 + 1;
      if (0x3ff < DAT_100096b8) break;
    }
    bVar2 = (byte)_File->_flag;
  }
  fclose(_File);
  if (1 < DAT_100096b8) {
    qsort(&DAT_100076a8,DAT_100096b8,8,(_PtFuncCompare *)&LAB_10004f90);
  }
  return 0;
}

