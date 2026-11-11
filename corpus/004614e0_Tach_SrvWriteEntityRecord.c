
/* 24-byte record, f16 rel pos/vel, u8 orient */

void * __cdecl Tach_SrvWriteEntityRecord(SpED *ent,vec3 *origin,void *out,byte flags)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  *(uint *)out = ent->netId;
  *(undefined1 *)((int)out + 4) = ent->field_0x7e;
  *(byte *)((int)out + 6) = ent->throttle;
  if (*(code **)(g_ActiveRules + 0x1c) != (code *)0x0) {
    uVar1 = (**(code **)(g_ActiveRules + 0x1c))(ent);
    *(undefined1 *)((int)out + 7) = uVar1;
  }
  *(byte *)((int)out + 5) = ent->stateFlags | flags;
  uVar2 = f16_Encode((ent->pos).x - origin->x);
  *(undefined2 *)((int)out + 8) = uVar2;
  uVar2 = f16_Encode((ent->pos).y - origin->y);
  *(undefined2 *)((int)out + 10) = uVar2;
  uVar2 = f16_Encode((ent->pos).z - origin->z);
  *(undefined2 *)((int)out + 0xc) = uVar2;
  *(char *)((int)out + 0x14) = (char)((ent->ang).x >> 0x11);
  *(char *)((int)out + 0x15) = (char)((ent->ang).y >> 0x11);
  *(char *)((int)out + 0x16) = (char)((ent->ang).z >> 0x11);
  uVar2 = f16_Encode((ent->vel).x);
  *(undefined2 *)((int)out + 0xe) = uVar2;
  uVar2 = f16_Encode((ent->vel).y);
  *(undefined2 *)((int)out + 0x10) = uVar2;
  uVar2 = f16_Encode((ent->vel).z);
  *(undefined2 *)((int)out + 0x12) = uVar2;
  ent->snapStamp = g_SnapStamp;
  return (void *)((int)out + 0x18);
}

