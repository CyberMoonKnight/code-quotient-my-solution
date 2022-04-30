def areBracketsBalanced(expr):
	stack = []
	# Traversing the Expression
	for char in expr:
		if char in ["(", "{", "["]:
			# Push the element in the stack
			stack.append(char)
		elif char in [")","}","]"]:
			if not stack:
				return False
			current_char = stack.pop()
			if current_char == '(':
				if char != ")":
					return False
			if current_char == '{':
				if char != "}":
					return False
			if current_char == '[':
				if char != "]":
					return False
	if stack:
		return False
	return True
