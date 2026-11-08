
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
        FUN_004175a0(puVar1);
        break;
      case 2:
        TachCli_OnDescTable(puVar1);
        break;
      case 3:
        TachCli_OnModelTable(puVar1);
        break;
      case 4:
        FUN_00417540(puVar1);
        break;
      case 5:
        FUN_00417690(puVar1);
        break;
      case 6:
        FUN_00417660(puVar1);
        break;
      case 7:
        FUN_004176d0(puVar1);
        break;
      case 8:
        FUN_00417700(puVar1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = (ushort *)((int)puVar1 + (uint)puVar1[1]);
    } while (uVar2 < *param_1);
  }
  return;
}

