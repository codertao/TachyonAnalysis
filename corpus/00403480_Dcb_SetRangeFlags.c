
/* +0xc0: 0x40 front shield > 1%, 0x80 rear shield > 1% (server think; sent in snapshot byte 5) */

void __cdecl Dcb_SetRangeFlags(PowerBlock *pw,void *maxes,SpED *ent)

{
  byte bVar1;
  
  bVar1 = ent->stateFlags & 0x3f;
  ent->stateFlags = bVar1;
  if (*(int *)((int)maxes + 0x10) < pw->shieldFront) {
    bVar1 = bVar1 | 0x40;
  }
  ent->stateFlags = bVar1;
  if (pw->shieldRear <= *(int *)((int)maxes + 0x10)) {
    ent->stateFlags = ent->stateFlags & 0x7f;
    return;
  }
  ent->stateFlags = ent->stateFlags | 0x80;
  return;
}

