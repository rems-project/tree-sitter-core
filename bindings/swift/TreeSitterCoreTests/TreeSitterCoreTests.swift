import XCTest
import SwiftTreeSitter
import TreeSitterCore

final class TreeSitterCoreTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_core())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Core grammar")
    }
}
