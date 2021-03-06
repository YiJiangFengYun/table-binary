# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: log_packet_struction.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import table_pb2 as table__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='log_packet_struction.proto',
  package='table',
  syntax='proto3',
  serialized_pb=_b('\n\x1alog_packet_struction.proto\x12\x05table\x1a\x0btable.proto\"\x83\x01\n\x14Log_packet_struction\x12\x1b\n\x05table\x18\x01 \x01(\x0b\x32\x0c.table.Table\x12\x1e\n\x07\x63olumns\x18\x02 \x03(\x0b\x32\r.table.Column\x12.\n\x05items\x18\x03 \x03(\x0b\x32\x1f.table.Log_packet_structionItem\"\x81\x01\n\x18Log_packet_structionItem\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0c\n\x04size\x18\x02 \x01(\x05\x12\x13\n\x0b\x64\x65scription\x18\x03 \x01(\t\x12\x19\n\x11key_name_for_code\x18\x04 \x01(\t\x12\x19\n\x11key_type_for_code\x18\x05 \x01(\tb\x06proto3')
  ,
  dependencies=[table__pb2.DESCRIPTOR,])




_LOG_PACKET_STRUCTION = _descriptor.Descriptor(
  name='Log_packet_struction',
  full_name='table.Log_packet_struction',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='table', full_name='table.Log_packet_struction.table', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='columns', full_name='table.Log_packet_struction.columns', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='items', full_name='table.Log_packet_struction.items', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=51,
  serialized_end=182,
)


_LOG_PACKET_STRUCTIONITEM = _descriptor.Descriptor(
  name='Log_packet_structionItem',
  full_name='table.Log_packet_structionItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='table.Log_packet_structionItem.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='size', full_name='table.Log_packet_structionItem.size', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='description', full_name='table.Log_packet_structionItem.description', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='key_name_for_code', full_name='table.Log_packet_structionItem.key_name_for_code', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='key_type_for_code', full_name='table.Log_packet_structionItem.key_type_for_code', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=185,
  serialized_end=314,
)

_LOG_PACKET_STRUCTION.fields_by_name['table'].message_type = table__pb2._TABLE
_LOG_PACKET_STRUCTION.fields_by_name['columns'].message_type = table__pb2._COLUMN
_LOG_PACKET_STRUCTION.fields_by_name['items'].message_type = _LOG_PACKET_STRUCTIONITEM
DESCRIPTOR.message_types_by_name['Log_packet_struction'] = _LOG_PACKET_STRUCTION
DESCRIPTOR.message_types_by_name['Log_packet_structionItem'] = _LOG_PACKET_STRUCTIONITEM
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Log_packet_struction = _reflection.GeneratedProtocolMessageType('Log_packet_struction', (_message.Message,), dict(
  DESCRIPTOR = _LOG_PACKET_STRUCTION,
  __module__ = 'log_packet_struction_pb2'
  # @@protoc_insertion_point(class_scope:table.Log_packet_struction)
  ))
_sym_db.RegisterMessage(Log_packet_struction)

Log_packet_structionItem = _reflection.GeneratedProtocolMessageType('Log_packet_structionItem', (_message.Message,), dict(
  DESCRIPTOR = _LOG_PACKET_STRUCTIONITEM,
  __module__ = 'log_packet_struction_pb2'
  # @@protoc_insertion_point(class_scope:table.Log_packet_structionItem)
  ))
_sym_db.RegisterMessage(Log_packet_structionItem)


# @@protoc_insertion_point(module_scope)
