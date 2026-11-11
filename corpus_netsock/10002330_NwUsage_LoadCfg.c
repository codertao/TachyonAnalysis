
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NWUSAGE.CFG: NWUSAGE_PORT / NWUSAGE_IPADDR / NWUSAGE_APPID (defaults 208.231.90.230:2827,
   "???????????????") */

undefined4 NwUsage_LoadCfg(void)

{
  char cVar1;
  FILE *_File;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 local_204;
  char acStack_202 [258];
  byte local_100 [256];
  
  _File = fopen(s_NWUSAGE_CFG_100070ec,&DAT_1000702c);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  iVar5 = 0;
  pcVar2 = fgets(acStack_202 + 2,0x100,_File);
  do {
    if (pcVar2 == (char *)0x0) {
      fclose(_File);
      return 0;
    }
    uVar4 = 0xffffffff;
    pcVar2 = acStack_202 + 2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (acStack_202[~uVar4] == '\n') {
      uVar4 = 0xffffffff;
      pcVar2 = acStack_202 + 2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      acStack_202[~uVar4] = '\0';
    }
    iVar5 = iVar5 + 1;
    _strupr(acStack_202 + 2);
    for (pcVar2 = acStack_202 + 2;
        ((cVar1 = *pcVar2, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\v')); pcVar2 = pcVar2 + 1
        ) {
    }
    iVar3 = strncmp(pcVar2,s_NWUSAGE_PORT_100070dc,0xc);
    if (iVar3 == 0) {
      iVar3 = FUN_10002240(acStack_202 + 2,iVar5,pcVar2,(int *)&local_204);
      if (iVar3 != 0) {
        DAT_10007064 = local_204;
      }
    }
    else {
      iVar3 = strncmp(pcVar2,s_NWUSAGE_IPADDR_100070cc,0xe);
      if (iVar3 == 0) {
        iVar3 = FUN_10002290(acStack_202 + 2,iVar5,pcVar2,(char *)local_100);
        if (iVar3 != 0) {
          DAT_10007060 = FUN_10004fa0(local_100);
        }
      }
      else {
        iVar3 = strncmp(pcVar2,s_NWUSAGE_APPID_100070bc,0xd);
        if (iVar3 == 0) {
          iVar3 = FUN_10002290(acStack_202 + 2,iVar5,pcVar2,(char *)local_100);
          if (iVar3 != 0) {
            _DAT_10007040 = 0;
            _DAT_10007044 = 0;
            _DAT_10007048 = 0;
            _DAT_1000704c = 0;
            strncpy(&DAT_10007040,(char *)local_100,0xf);
            FUN_10002310(0x10007050,&DAT_10007040);
          }
        }
        else {
          strncmp(pcVar2,&DAT_100070b8,1);
        }
      }
    }
    pcVar2 = fgets(acStack_202 + 2,0x100,_File);
  } while( true );
}

