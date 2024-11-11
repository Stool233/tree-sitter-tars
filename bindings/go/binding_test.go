package tree_sitter_tars_test

import (
	"testing"

	tree_sitter_tars "github.com/stool233/tree-sitter-tars/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tars.Language())
	if language == nil {
		t.Errorf("Error loading Tars grammar")
	}
}
