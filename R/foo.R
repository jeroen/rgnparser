#' @export
#' @useDynLib rgnparser add_
add <- function(x, y) {
  .Call("add_", x, y)
}

#' @export
#' @useDynLib rgnparser add_
foo <- function(x) {
  .Call("foo", x)
}
