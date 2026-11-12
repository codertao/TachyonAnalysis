
/* {u16 nRecs; {u16 kind; u16 size; ...}*} dispatch kinds 1..8 */

void TachCli_ReadStartupBlob(ushort *param_1)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 1;
  if (*param_1 != 0) {
    do {
      switch(*puVar1) {
      case 1:
        TachCli_ReadRules(puVar1);
        break;
      case 2:
        TachCli_OnDescTable(puVar1);
        break;
      case 3:
        TachCli_OnModelTable(puVar1);
        break;
      case 4:
        TachCli_ReadPlayerInit(puVar1);
        break;
      case 5:
        TachCli_ReadRoster(puVar1);
        break;
      case 6:
        TachCli_ReadPortraits(puVar1);
        break;
      case 7:
        TachCli_ReadSessionInfo(puVar1);
        break;
      case 8:
        TachCli_ReadTechData(puVar1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = (ushort *)((int)puVar1 + (uint)puVar1[1]);
    } while (uVar2 < *param_1);
  }
  return;
}

