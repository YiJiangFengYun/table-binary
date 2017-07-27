from creator import pb_document
from creator import pb_enum_doc_versions
from creator.types import pb_buildInTypes

doc = pb_document.Document("protobuff-creator-test",
                           pb_enum_doc_versions.DocVersion.VERSION_3,
                           "test")

import1 = doc.add_import("import1-test")
enum1 = doc.add_enum("enum1-test")
message1 = doc.add_message("message1-test")

enum1.add_field("ENUM_1")
message1.add_field("field", pb_buildInTypes.string)
message1.add_field("fieldRepeat", pb_buildInTypes.int32, {"is_repeated": True})

message2 = doc.add_message("message2-test")
message2.add_field("enum1", enum1)

print("document to text: ")
print(doc.to_text())

doc.dispose()

print("process end.")