
/* (voice@EDI, pan@EBX, vol@ECX, arg@EDX) -1 keeps current; pan via table 0x4df8d0, master volume
   0x601e20 */

void __cdecl Snd_SetVoiceVolPan(void *voice,int pan,int vol,int arg)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (pan == -1) {
    pan = *(uint *)((int)voice + 0x18);
  }
  if (vol == -1) {
    vol = *(int *)((int)voice + 0x1c);
  }
  *(int *)((int)voice + 0x18) = pan;
  *(int *)((int)voice + 0x1c) = vol;
  bVar4 = (char)*(undefined4 *)((int)voice + 0x20) + 0x10;
  DAT_004dee40 = (int)(char)((ushort)*(undefined2 *)(&DAT_004df8d0 + (pan & 0xffU) * 2) >> 8) *
                 vol * DAT_00601e20 >> (bVar4 & 0x1f);
  DAT_004dee44 = (int)(char)*(undefined2 *)(&DAT_004df8d0 + (pan & 0xffU) * 2) * vol * DAT_00601e20
                 >> (bVar4 & 0x1f);
  if (arg == 0) {
    arg = 0x10000;
  }
  if (arg != -1) {
    *(int *)((int)voice + 0x34) =
         (int)((longlong)arg * (longlong)*(int *)((int)voice + 0x14) >> 0x22);
  }
  uVar2 = DAT_004dee44;
  uVar1 = DAT_004dee40;
  uVar5 = 0;
  if (((int)(*(uint *)((int)voice + 0x24) ^ DAT_004dee40) < 0) &&
     (uVar5 = *(int *)((int)voice + 0x24) - DAT_004dee40, (int)uVar5 < 0)) {
    uVar5 = -uVar5;
  }
  if ((int)(*(uint *)((int)voice + 0x28) ^ DAT_004dee44) < 0) {
    iVar7 = *(int *)((int)voice + 0x28) - DAT_004dee44;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    uVar5 = uVar5 + iVar7;
  }
  DAT_004dee40 = -DAT_004dee40;
  DAT_004dee44 = -DAT_004dee44;
  uVar6 = 0;
  if (((int)(*(uint *)((int)voice + 0x24) ^ DAT_004dee40) < 0) &&
     (uVar6 = *(int *)((int)voice + 0x24) + uVar1, (int)uVar6 < 0)) {
    uVar6 = -uVar6;
  }
  if ((int)(*(uint *)((int)voice + 0x28) ^ DAT_004dee44) < 0) {
    iVar7 = *(int *)((int)voice + 0x28) + uVar2;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    uVar6 = uVar6 + iVar7;
  }
  uVar3 = DAT_004dee40;
  uVar8 = DAT_004dee44;
  if (uVar5 <= uVar6) {
    uVar3 = uVar1;
    uVar8 = uVar2;
  }
  *(uint *)((int)voice + 0x24) = uVar3;
  *(uint *)((int)voice + 0x28) = uVar8;
  return;
}

