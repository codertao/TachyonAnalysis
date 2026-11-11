
/* finalize app event {type,size,tag} + delivery spec, add to broadcast list 0x6af69c */

void __cdecl NetSrv_QueueEvent(void *payload,ushort type,short size,EventSpec *spec)

{
  if ((payload != (void *)0x0) && (spec != (EventSpec *)0x0)) {
    *(ushort *)((int)payload + -8) = type;
    *(short *)((int)payload + -6) = size + 8;
    *(undefined4 *)((int)payload + -4) = *(undefined4 *)((int)payload + -0x2c);
    *(int *)((int)payload + -0x24) = (int)spec->resend;
    *(undefined4 *)((int)payload + -0x20) = 0;
    *(uint *)((int)payload + -0x1c) = (uint)spec->flags;
    *(TachConn **)((int)payload + -0x14) = spec->target;
    *(short *)((int)payload + -0x10) = spec->teamOrGroup;
    *(uint *)((int)payload + -0x18) = spec->radius;
    *(Quadrant **)((int)payload + -0xc) = spec->quadrant;
    List_Append((void *)((int)payload + -0x3c),&g_NetEventList);
  }
  return;
}

