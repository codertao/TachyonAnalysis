
/* sweep: guess */

void Snd_GetMixPos(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = DAT_005f9d54;
  if (DAT_00563e9c == 0) {
    puVar3 = DAT_005f9e04;
    for (uVar1 = DAT_005f9d54 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar1 = DAT_005f9d54, uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar3 = DAT_005f9e08;
    for (uVar2 = DAT_005f9d54 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar2 = DAT_005f9d54, uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar3 = DAT_005f9e0c;
    for (uVar1 = DAT_005f9d54 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return;
}

