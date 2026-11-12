
/* map a SPED object alias to its .des file via the desnames.cfg name registry
   (Sped_LoadNameRegistry); falls back to DEFAULT */

undefined4 Spx_ResolveDesName(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  do {
    while( true ) {
      if (DAT_005a5e04 == (undefined4 *)0x0) {
        Sped_LoadNameRegistry(s_desnames_cfg_0053f928,0xd100);
      }
      Str_ToUpperInPlace(param_1,0x20,0x5f);
      if (param_1 != (char *)0x0) break;
      param_1 = s_DEFAULT_0053f920;
    }
    iVar3 = 0;
    puVar2 = DAT_005a5e04;
    if (0 < DAT_005a5df8) {
      do {
        iVar1 = __stricmp(param_1,*puVar2);
        if (iVar1 == 0) {
          return puVar2[1];
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar3 < DAT_005a5df8);
    }
    param_1 = s_DEFAULT_0053f920;
  } while( true );
}

